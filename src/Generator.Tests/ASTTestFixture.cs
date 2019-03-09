using System;
using CppSharp.AST;
using CppSharp.Utils;
using CppSharp.Parser;
using CppSharp.Passes;
using CppSharp.Generators;

namespace CppSharp.Generator.Tests
{
    public class ASTTestFixture
    {
        protected Driver Driver;
        protected DriverOptions Options;
        protected ParserOptions ParserOptions;
        protected ASTContext AstContext;

        protected void ParseLibrary(params string[] files)
        {
            Options = new DriverOptions { GeneratorKind = GeneratorKind.CSharp };
            ParserOptions = new ParserOptions();

            var testsPath = GeneratorTest.GetTestsDirectory("Native");
            ParserOptions.AddIncludeDirs(testsPath);
            ParserOptions.SkipPrivateDeclarations = true;

            var module = Options.AddModule("Test");
            module.Headers.AddRange(files);

            Driver = new Driver(Options)
            {
                ParserOptions = this.ParserOptions
            };

            Driver.Setup();
            if (!Driver.ParseCode())
                throw new Exception("Error parsing the code");

            Driver.SetupTypeMaps();
            AstContext = Driver.Context.ASTContext;
            new CleanUnitPass { Context = Driver.Context }.VisitASTContext(AstContext);
            new ResolveIncompleteDeclsPass { Context = Driver.Context }.VisitASTContext(AstContext);
        }
    }
}
