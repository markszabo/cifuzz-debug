load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "code",
    srcs = ["code.cpp"],
    hdrs = ["code.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":code",
    ],
    visibility = ["//visibility:public"],
)
