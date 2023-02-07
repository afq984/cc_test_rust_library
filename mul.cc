// Copyright 2023 The ChromiumOS Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cstdint>

extern "C" {
int32_t add(int32_t a, int32_t b);

int32_t mul(int32_t a, int32_t b) {
  int32_t sum = 0;
  for (int i = 0; i < b; i++) {
    sum = add(sum, a);
  }
  return sum;
}

}
