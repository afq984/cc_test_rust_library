// Copyright 2023 The ChromiumOS Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#[no_mangle]
pub extern "C" fn sub(a: i32, b: i32) -> i32 {
    return a - b;
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_add() {
        assert_eq!(-1, sub(3, 4));
    }
}
