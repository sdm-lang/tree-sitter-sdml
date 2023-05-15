// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSdml",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterSdml", targets: ["TreeSitterSdml"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterSdml",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "grammar.js",
                    "LICENSE",
                    "Makefile",
                    "package.json",
                    "queries",
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
