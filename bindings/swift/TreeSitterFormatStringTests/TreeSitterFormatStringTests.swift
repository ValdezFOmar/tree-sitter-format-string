import XCTest
import SwiftTreeSitter
import TreeSitterFormatString

final class TreeSitterFormatStringTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_format_string())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading FormatString grammar")
    }
}
