from unittest import TestCase

import tree_sitter, tree_sitter_format_string


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_format_string.language())
        except Exception:
            self.fail("Error loading FormatString grammar")
