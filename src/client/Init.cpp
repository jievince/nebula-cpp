/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#include <folly/init/Init.h>

namespace nebula {

void init(int *argc, char **argv[]) { folly::init(argc, argv, true); }

}  // namespace nebula
