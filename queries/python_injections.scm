;; Python only uses formated strings in the str.format method,
;; commonly used like this:
;;
;; 'Hello {}'.format('world')
;; '{:.4f}'.format(math.pi)

((call
  function: (attribute
    object: (string
      (string_content) @injection.content)
    attribute: (identifier) @_format))
  (#eq? @_format "format")
  (#set! injection.language "format_string"))
