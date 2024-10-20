(identifier) @variable

(attribute_expression
  attribute: (identifier) @variable.member)

(integer) @number

(item_string) @string

(conversion) @function.macro

(type) @type

(character) @character

[
  "<"
  ">"
  "="
  "^"
  "*"
  (sign)
  (alternate_form)
  (grouping_option)
  (zero_normalization)
] @character.special

[
  "."
  ":"
] @punctuation.delimiter

[
  "["
  "]"
] @punctuation.bracket

[
  "{"
  "}"
  "$"
] @punctuation.special

[
  "{{"
  "}}"
] @string.escape
