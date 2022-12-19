load("@rules_fuzzing//fuzzing:cc_defs.bzl", "cc_fuzz_test")

cc_fuzz_test(
    name = "1234567890123456789012345678901234567890",
    srcs = ["fuzz_code.cpp"],
    corpus = glob(
        ["fuzz_code_inputs/**"],
        allow_empty = True,
    ) + select({
        "@cifuzz//:collect_coverage": glob([".fuzz_code_cifuzz_corpus/**"], allow_empty = True),
        "//conditions:default": [],
    }),
    deps = [
        "@cifuzz",
        "//code:code",
        ],
    tags = ["fuzz_test"],
)
