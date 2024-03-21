package tree_sitter_melody_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-melody"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_melody.Language())
	if language == nil {
		t.Errorf("Error loading Melody grammar")
	}
}
