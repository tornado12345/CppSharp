﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using CppSharp.AST;
using CppSharp.Generators.CSharp;
using System.Text.RegularExpressions;
using CppSharp.Generators;

namespace CppSharp.Passes
{
    public class CleanCommentsPass : TranslationUnitPass, ICommentVisitor<bool>
    {
        public bool VisitBlockCommand(BlockCommandComment comment)
        {
            return true;
        }

        public override bool VisitDeclaration(Declaration decl)
        {
            if (!base.VisitDeclaration(decl))
                return false;

            if (decl.Comment != null)
            {
                var fullComment = decl.Comment.FullComment;
                VisitFull(fullComment);

            }
            return true;
        }

        public bool VisitFull(FullComment comment)
        {
            foreach (var block in comment.Blocks)
                block.Visit(this);

            return true;
        }
        #region Comments Visit
        public bool VisitHTMLEndTag(HTMLEndTagComment comment)
        {
            return true;
        }

        public bool VisitHTMLStartTag(HTMLStartTagComment comment)
        {
            return true;
        }

        public bool VisitInlineCommand(InlineCommandComment comment)
        {
            return true;
        }

        public bool VisitParagraphCommand(ParagraphComment comment)
        {
            for (int i = 0; i < comment.Content.Count; i++)
            {
                if (comment.Content[i].Kind == DocumentationCommentKind.InlineCommandComment &&
                    i + 1 < comment.Content.Count &&
                    comment.Content[i + 1].Kind == DocumentationCommentKind.TextComment)
                {
                    var textComment = (TextComment) comment.Content[i + 1];
                    textComment.Text = Helpers.RegexCommentCommandLeftover.Replace(
                        textComment.Text, string.Empty);
                }
            }
            foreach (var item in comment.Content.Where(c => c.Kind == DocumentationCommentKind.TextComment))
            {
                var textComment = (TextComment) item;

                if (textComment.Text.StartsWith("<", StringComparison.Ordinal))
                    textComment.Text = $"{textComment.Text}>";
                else if (textComment.Text.StartsWith(">", StringComparison.Ordinal))
                    textComment.Text = textComment.Text.Substring(1);
            }
            return true;
        }

        public bool VisitParamCommand(ParamCommandComment comment)
        {
            return true;
        }

        public bool VisitText(TextComment comment)
        {
            return true;
        }

        public bool VisitTParamCommand(TParamCommandComment comment)
        {
            return true;
        }

        public bool VisitVerbatimBlock(VerbatimBlockComment comment)
        {
            return true;
        }

        public bool VisitVerbatimBlockLine(VerbatimBlockLineComment comment)
        {
            return true;
        }

        public bool VisitVerbatimLine(VerbatimLineComment comment)
        {
            return true;
        }
        #endregion
    }
}
