package tree_sitter_format_string_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_format_string "github.com/ValdezFOmar/tree-sitter-format_string/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_format_string.Language())
	if language == nil {
		t.Errorf("Error loading FormatString grammar")
	}
}
