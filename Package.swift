 // swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSmithy",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterSmithy", targets: ["TreeSitterSmithy"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterSmithy",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "examples",
                    "grammar.js",
                    "LICENSE",
                    "Makefile",
                    "package.json",
                    "README.org",
                    "src/grammar.json",
                    "src/node-types.json",
                    "test",
                ],
                sources: [
                    "src/parser.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
