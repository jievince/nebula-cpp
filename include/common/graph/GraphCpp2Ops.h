/* Copyright (c) 2021 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#pragma once

#include "common/thrift/ThriftCpp2OpsHelper.h"

namespace nebula {
struct AuthResponse;
struct ExecutionResponse;
struct Pair;
struct PlanDescription;
struct PlanNodeBranchInfo;
struct PlanNodeDescription;
struct ProfilingStats;
}  // namespace nebula

namespace apache::thrift {

SPECIALIZE_CPP2OPS(nebula::AuthResponse);
SPECIALIZE_CPP2OPS(nebula::ExecutionResponse);
SPECIALIZE_CPP2OPS(nebula::Pair);
SPECIALIZE_CPP2OPS(nebula::PlanDescription);
SPECIALIZE_CPP2OPS(nebula::PlanNodeBranchInfo);
SPECIALIZE_CPP2OPS(nebula::PlanNodeDescription);
SPECIALIZE_CPP2OPS(nebula::ProfilingStats);

}  // namespace apache::thrift
