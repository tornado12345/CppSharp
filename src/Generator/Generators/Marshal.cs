﻿using CppSharp.AST;

namespace CppSharp.Generators
{
    public class MarshalContext : TypePrinter
    {
        public MarshalContext(BindingContext context)
        {
            Context = context;
            Before = new TextGenerator();
            Return = new TextGenerator();
            MarshalVarPrefix = string.Empty;
        }

        public BindingContext Context { get; private set; }

        public MarshalPrinter<MarshalContext> MarshalToNative;

        public TextGenerator Before { get; private set; }
        public TextGenerator Return { get; private set; }

        public string ReturnVarName { get; set; }
        public QualifiedType ReturnType { get; set; }

        public string ArgName { get; set; }
        public int ParameterIndex { get; set; }
        public Function Function { get; set; }

        public string MarshalVarPrefix { get; set; }
    }

    public abstract class MarshalPrinter<T> : AstVisitor where T : MarshalContext
    {
        public T Context { get; private set; }

        protected MarshalPrinter(T ctx)
        {
            Context = ctx;
        }
    }
}
