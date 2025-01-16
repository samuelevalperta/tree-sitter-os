package tree_sitter_os_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_os "github.com/samuelevalperta/tree-sitter-os.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_os.Language())
	if language == nil {
		t.Errorf("Error loading Os grammar")
	}
}
