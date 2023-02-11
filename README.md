cc_test + rust_library

```
bazel test //...
INFO: Invocation ID: b3838436-8b04-4c86-8835-1f52c26a5120
INFO: Analyzed 7 targets (0 packages loaded, 0 targets configured).
INFO: Found 3 targets and 4 test targets...
INFO: Elapsed time: 0.146s, Critical Path: 0.00s
INFO: 1 process: 1 internal.
INFO: Build completed successfully, 1 total action
//:add_test                                                     (cached) PASSED in 0.0s
//:all_test                                                     (cached) PASSED in 0.0s
//:mul_test                                                     (cached) PASSED in 0.0s
//:sub_test                                                     (cached) PASSED in 0.0s

Executed 0 out of 4 tests: 4 tests pass.
There were tests whose specified size is too big. Use the --test_verbose_timeout_warnings command line option to see which ones these are.
```
