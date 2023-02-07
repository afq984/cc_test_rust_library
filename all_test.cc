// Copyright 2023 The ChromiumOS Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cstdint>

#include "gtest/gtest.h"

extern "C" {
int32_t add(int32_t a, int32_t b);
int32_t sub(int32_t a, int32_t b);
int32_t mul(int32_t a, int32_t b);
}

TEST(Math, Add) {
  EXPECT_EQ(add(1, 2), 3);
  EXPECT_EQ(add(3, 4), 7);
}

TEST(Math, Sub) {
  EXPECT_EQ(sub(1, 2), -1);
  EXPECT_EQ(sub(3, 4), -1);
}

TEST(Math, Mul) {
  EXPECT_EQ(mul(1, 2), 2);
  EXPECT_EQ(mul(3, 4), 12);
}
