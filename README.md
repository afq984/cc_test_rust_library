cc_test + rust_library

```
bazel test //... -k
FAILED: Build did NOT complete successfully
//:add_test                                                     (cached) PASSED in 0.0s
//:sub_test                                                     (cached) PASSED in 0.0s
//:all2_test                                                    FAILED TO BUILD
//:all_test                                                     FAILED TO BUILD
//:mul_test                                                     FAILED TO BUILD
//:all1_test                                                             PASSED in 0.0s
//:mul1_test                                                             PASSED in 0.0s
//:mul2_test                                                             PASSED in 0.0s
```
