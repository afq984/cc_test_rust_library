// Copyright 2023 The ChromiumOS Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cstdint>

#include "gtest/gtest.h"

extern "C" {
int32_t mul(int32_t a, int32_t b);
}

TEST(Math, Mul) {
  EXPECT_EQ(mul(1, 2), 2);
  EXPECT_EQ(mul(3, 4), 12);
}
