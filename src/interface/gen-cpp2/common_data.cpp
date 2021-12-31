/**
 * Autogenerated by Thrift for common.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "common_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::nebula::cpp2::NullType, 8> TEnumDataStorage<::nebula::cpp2::NullType>::values = {{
  type::__NULL__,
  type::NaN,
  type::BAD_DATA,
  type::BAD_TYPE,
  type::ERR_OVERFLOW,
  type::UNKNOWN_PROP,
  type::DIV_BY_ZERO,
  type::OUT_OF_RANGE,
}};
const std::array<folly::StringPiece, 8> TEnumDataStorage<::nebula::cpp2::NullType>::names = {{
  "__NULL__",
  "NaN",
  "BAD_DATA",
  "BAD_TYPE",
  "ERR_OVERFLOW",
  "UNKNOWN_PROP",
  "DIV_BY_ZERO",
  "OUT_OF_RANGE",
}};

const std::array<::nebula::cpp2::PropertyType, 16> TEnumDataStorage<::nebula::cpp2::PropertyType>::values = {{
  type::UNKNOWN,
  type::BOOL,
  type::INT64,
  type::VID,
  type::FLOAT,
  type::DOUBLE,
  type::STRING,
  type::FIXED_STRING,
  type::INT8,
  type::INT16,
  type::INT32,
  type::TIMESTAMP,
  type::DATE,
  type::DATETIME,
  type::TIME,
  type::GEOGRAPHY,
}};
const std::array<folly::StringPiece, 16> TEnumDataStorage<::nebula::cpp2::PropertyType>::names = {{
  "UNKNOWN",
  "BOOL",
  "INT64",
  "VID",
  "FLOAT",
  "DOUBLE",
  "STRING",
  "FIXED_STRING",
  "INT8",
  "INT16",
  "INT32",
  "TIMESTAMP",
  "DATE",
  "DATETIME",
  "TIME",
  "GEOGRAPHY",
}};

const std::array<::nebula::cpp2::ErrorCode, 121> TEnumDataStorage<::nebula::cpp2::ErrorCode>::values = {{
  type::SUCCEEDED,
  type::E_DISCONNECTED,
  type::E_FAIL_TO_CONNECT,
  type::E_RPC_FAILURE,
  type::E_LEADER_CHANGED,
  type::E_SPACE_NOT_FOUND,
  type::E_TAG_NOT_FOUND,
  type::E_EDGE_NOT_FOUND,
  type::E_INDEX_NOT_FOUND,
  type::E_EDGE_PROP_NOT_FOUND,
  type::E_TAG_PROP_NOT_FOUND,
  type::E_ROLE_NOT_FOUND,
  type::E_CONFIG_NOT_FOUND,
  type::E_MACHINE_NOT_FOUND,
  type::E_ZONE_NOT_FOUND,
  type::E_LISTENER_NOT_FOUND,
  type::E_PART_NOT_FOUND,
  type::E_KEY_NOT_FOUND,
  type::E_USER_NOT_FOUND,
  type::E_STATS_NOT_FOUND,
  type::E_BACKUP_FAILED,
  type::E_BACKUP_EMPTY_TABLE,
  type::E_BACKUP_TABLE_FAILED,
  type::E_PARTIAL_RESULT,
  type::E_REBUILD_INDEX_FAILED,
  type::E_INVALID_PASSWORD,
  type::E_FAILED_GET_ABS_PATH,
  type::E_BAD_USERNAME_PASSWORD,
  type::E_SESSION_INVALID,
  type::E_SESSION_TIMEOUT,
  type::E_SYNTAX_ERROR,
  type::E_EXECUTION_ERROR,
  type::E_STATEMENT_EMPTY,
  type::E_BAD_PERMISSION,
  type::E_SEMANTIC_ERROR,
  type::E_TOO_MANY_CONNECTIONS,
  type::E_PARTIAL_SUCCEEDED,
  type::E_NO_HOSTS,
  type::E_EXISTED,
  type::E_INVALID_HOST,
  type::E_UNSUPPORTED,
  type::E_NOT_DROP,
  type::E_BALANCER_RUNNING,
  type::E_CONFIG_IMMUTABLE,
  type::E_CONFLICT,
  type::E_INVALID_PARM,
  type::E_WRONGCLUSTER,
  type::E_STORE_FAILURE,
  type::E_STORE_SEGMENT_ILLEGAL,
  type::E_BAD_BALANCE_PLAN,
  type::E_BALANCED,
  type::E_NO_RUNNING_BALANCE_PLAN,
  type::E_NO_VALID_HOST,
  type::E_CORRUPTED_BALANCE_PLAN,
  type::E_NO_INVALID_BALANCE_PLAN,
  type::E_IMPROPER_ROLE,
  type::E_INVALID_PARTITION_NUM,
  type::E_INVALID_REPLICA_FACTOR,
  type::E_INVALID_CHARSET,
  type::E_INVALID_COLLATE,
  type::E_CHARSET_COLLATE_NOT_MATCH,
  type::E_SNAPSHOT_FAILURE,
  type::E_BLOCK_WRITE_FAILURE,
  type::E_REBUILD_INDEX_FAILURE,
  type::E_INDEX_WITH_TTL,
  type::E_ADD_JOB_FAILURE,
  type::E_STOP_JOB_FAILURE,
  type::E_SAVE_JOB_FAILURE,
  type::E_BALANCER_FAILURE,
  type::E_JOB_NOT_FINISHED,
  type::E_TASK_REPORT_OUT_DATE,
  type::E_JOB_NOT_IN_SPACE,
  type::E_INVALID_JOB,
  type::E_BACKUP_BUILDING_INDEX,
  type::E_BACKUP_SPACE_NOT_FOUND,
  type::E_RESTORE_FAILURE,
  type::E_SESSION_NOT_FOUND,
  type::E_LIST_CLUSTER_FAILURE,
  type::E_LIST_CLUSTER_GET_ABS_PATH_FAILURE,
  type::E_GET_META_DIR_FAILURE,
  type::E_QUERY_NOT_FOUND,
  type::E_CONSENSUS_ERROR,
  type::E_KEY_HAS_EXISTS,
  type::E_DATA_TYPE_MISMATCH,
  type::E_INVALID_FIELD_VALUE,
  type::E_INVALID_OPERATION,
  type::E_NOT_NULLABLE,
  type::E_FIELD_UNSET,
  type::E_OUT_OF_RANGE,
  type::E_ATOMIC_OP_FAILED,
  type::E_DATA_CONFLICT_ERROR,
  type::E_WRITE_STALLED,
  type::E_IMPROPER_DATA_TYPE,
  type::E_INVALID_SPACEVIDLEN,
  type::E_INVALID_FILTER,
  type::E_INVALID_UPDATER,
  type::E_INVALID_STORE,
  type::E_INVALID_PEER,
  type::E_RETRY_EXHAUSTED,
  type::E_TRANSFER_LEADER_FAILED,
  type::E_INVALID_STAT_TYPE,
  type::E_INVALID_VID,
  type::E_NO_TRANSFORMED,
  type::E_LOAD_META_FAILED,
  type::E_FAILED_TO_CHECKPOINT,
  type::E_CHECKPOINT_BLOCKED,
  type::E_FILTER_OUT,
  type::E_INVALID_DATA,
  type::E_MUTATE_EDGE_CONFLICT,
  type::E_MUTATE_TAG_CONFLICT,
  type::E_OUTDATED_LOCK,
  type::E_INVALID_TASK_PARA,
  type::E_USER_CANCEL,
  type::E_TASK_EXECUTION_FAILED,
  type::E_PLAN_IS_KILLED,
  type::E_NO_TERM,
  type::E_OUTDATED_TERM,
  type::E_OUTDATED_EDGE,
  type::E_WRITE_WRITE_CONFLICT,
  type::E_CLIENT_SERVER_INCOMPATIBLE,
  type::E_UNKNOWN,
}};
const std::array<folly::StringPiece, 121> TEnumDataStorage<::nebula::cpp2::ErrorCode>::names = {{
  "SUCCEEDED",
  "E_DISCONNECTED",
  "E_FAIL_TO_CONNECT",
  "E_RPC_FAILURE",
  "E_LEADER_CHANGED",
  "E_SPACE_NOT_FOUND",
  "E_TAG_NOT_FOUND",
  "E_EDGE_NOT_FOUND",
  "E_INDEX_NOT_FOUND",
  "E_EDGE_PROP_NOT_FOUND",
  "E_TAG_PROP_NOT_FOUND",
  "E_ROLE_NOT_FOUND",
  "E_CONFIG_NOT_FOUND",
  "E_MACHINE_NOT_FOUND",
  "E_ZONE_NOT_FOUND",
  "E_LISTENER_NOT_FOUND",
  "E_PART_NOT_FOUND",
  "E_KEY_NOT_FOUND",
  "E_USER_NOT_FOUND",
  "E_STATS_NOT_FOUND",
  "E_BACKUP_FAILED",
  "E_BACKUP_EMPTY_TABLE",
  "E_BACKUP_TABLE_FAILED",
  "E_PARTIAL_RESULT",
  "E_REBUILD_INDEX_FAILED",
  "E_INVALID_PASSWORD",
  "E_FAILED_GET_ABS_PATH",
  "E_BAD_USERNAME_PASSWORD",
  "E_SESSION_INVALID",
  "E_SESSION_TIMEOUT",
  "E_SYNTAX_ERROR",
  "E_EXECUTION_ERROR",
  "E_STATEMENT_EMPTY",
  "E_BAD_PERMISSION",
  "E_SEMANTIC_ERROR",
  "E_TOO_MANY_CONNECTIONS",
  "E_PARTIAL_SUCCEEDED",
  "E_NO_HOSTS",
  "E_EXISTED",
  "E_INVALID_HOST",
  "E_UNSUPPORTED",
  "E_NOT_DROP",
  "E_BALANCER_RUNNING",
  "E_CONFIG_IMMUTABLE",
  "E_CONFLICT",
  "E_INVALID_PARM",
  "E_WRONGCLUSTER",
  "E_STORE_FAILURE",
  "E_STORE_SEGMENT_ILLEGAL",
  "E_BAD_BALANCE_PLAN",
  "E_BALANCED",
  "E_NO_RUNNING_BALANCE_PLAN",
  "E_NO_VALID_HOST",
  "E_CORRUPTED_BALANCE_PLAN",
  "E_NO_INVALID_BALANCE_PLAN",
  "E_IMPROPER_ROLE",
  "E_INVALID_PARTITION_NUM",
  "E_INVALID_REPLICA_FACTOR",
  "E_INVALID_CHARSET",
  "E_INVALID_COLLATE",
  "E_CHARSET_COLLATE_NOT_MATCH",
  "E_SNAPSHOT_FAILURE",
  "E_BLOCK_WRITE_FAILURE",
  "E_REBUILD_INDEX_FAILURE",
  "E_INDEX_WITH_TTL",
  "E_ADD_JOB_FAILURE",
  "E_STOP_JOB_FAILURE",
  "E_SAVE_JOB_FAILURE",
  "E_BALANCER_FAILURE",
  "E_JOB_NOT_FINISHED",
  "E_TASK_REPORT_OUT_DATE",
  "E_JOB_NOT_IN_SPACE",
  "E_INVALID_JOB",
  "E_BACKUP_BUILDING_INDEX",
  "E_BACKUP_SPACE_NOT_FOUND",
  "E_RESTORE_FAILURE",
  "E_SESSION_NOT_FOUND",
  "E_LIST_CLUSTER_FAILURE",
  "E_LIST_CLUSTER_GET_ABS_PATH_FAILURE",
  "E_GET_META_DIR_FAILURE",
  "E_QUERY_NOT_FOUND",
  "E_CONSENSUS_ERROR",
  "E_KEY_HAS_EXISTS",
  "E_DATA_TYPE_MISMATCH",
  "E_INVALID_FIELD_VALUE",
  "E_INVALID_OPERATION",
  "E_NOT_NULLABLE",
  "E_FIELD_UNSET",
  "E_OUT_OF_RANGE",
  "E_ATOMIC_OP_FAILED",
  "E_DATA_CONFLICT_ERROR",
  "E_WRITE_STALLED",
  "E_IMPROPER_DATA_TYPE",
  "E_INVALID_SPACEVIDLEN",
  "E_INVALID_FILTER",
  "E_INVALID_UPDATER",
  "E_INVALID_STORE",
  "E_INVALID_PEER",
  "E_RETRY_EXHAUSTED",
  "E_TRANSFER_LEADER_FAILED",
  "E_INVALID_STAT_TYPE",
  "E_INVALID_VID",
  "E_NO_TRANSFORMED",
  "E_LOAD_META_FAILED",
  "E_FAILED_TO_CHECKPOINT",
  "E_CHECKPOINT_BLOCKED",
  "E_FILTER_OUT",
  "E_INVALID_DATA",
  "E_MUTATE_EDGE_CONFLICT",
  "E_MUTATE_TAG_CONFLICT",
  "E_OUTDATED_LOCK",
  "E_INVALID_TASK_PARA",
  "E_USER_CANCEL",
  "E_TASK_EXECUTION_FAILED",
  "E_PLAN_IS_KILLED",
  "E_NO_TERM",
  "E_OUTDATED_TERM",
  "E_OUTDATED_EDGE",
  "E_WRITE_WRITE_CONFLICT",
  "E_CLIENT_SERVER_INCOMPATIBLE",
  "E_UNKNOWN",
}};

const std::array<::nebula::cpp2::SchemaID::Type, 2> TEnumDataStorage<::nebula::cpp2::SchemaID::Type>::values = {{
  type::tag_id,
  type::edge_type,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::nebula::cpp2::SchemaID::Type>::names = {{
  "tag_id",
  "edge_type",
}};

const std::array<::nebula::cpp2::Value::Type, 16> TEnumDataStorage<::nebula::cpp2::Value::Type>::values = {{
  type::nVal,
  type::bVal,
  type::iVal,
  type::fVal,
  type::sVal,
  type::dVal,
  type::tVal,
  type::dtVal,
  type::vVal,
  type::eVal,
  type::pVal,
  type::lVal,
  type::mVal,
  type::uVal,
  type::gVal,
  type::ggVal,
}};
const std::array<folly::StringPiece, 16> TEnumDataStorage<::nebula::cpp2::Value::Type>::names = {{
  "nVal",
  "bVal",
  "iVal",
  "fVal",
  "sVal",
  "dVal",
  "tVal",
  "dtVal",
  "vVal",
  "eVal",
  "pVal",
  "lVal",
  "mVal",
  "uVal",
  "gVal",
  "ggVal",
}};

const std::array<::nebula::cpp2::Geography::Type, 3> TEnumDataStorage<::nebula::cpp2::Geography::Type>::values = {{
  type::ptVal,
  type::lsVal,
  type::pgVal,
}};
const std::array<folly::StringPiece, 3> TEnumDataStorage<::nebula::cpp2::Geography::Type>::names = {{
  "ptVal",
  "lsVal",
  "pgVal",
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::SchemaID>::fields_names = {{
  "tag_id",
  "edge_type",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::SchemaID>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::SchemaID>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::nebula::cpp2::Date>::fields_names = {{
  "year",
  "month",
  "day",
}};
const std::array<int16_t, 3> TStructDataStorage<::nebula::cpp2::Date>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::nebula::cpp2::Date>::fields_types = {{
  TType::T_I16,
  TType::T_BYTE,
  TType::T_BYTE,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::nebula::cpp2::Time>::fields_names = {{
  "hour",
  "minute",
  "sec",
  "microsec",
}};
const std::array<int16_t, 4> TStructDataStorage<::nebula::cpp2::Time>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::nebula::cpp2::Time>::fields_types = {{
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 7> TStructDataStorage<::nebula::cpp2::DateTime>::fields_names = {{
  "year",
  "month",
  "day",
  "hour",
  "minute",
  "sec",
  "microsec",
}};
const std::array<int16_t, 7> TStructDataStorage<::nebula::cpp2::DateTime>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
}};
const std::array<protocol::TType, 7> TStructDataStorage<::nebula::cpp2::DateTime>::fields_types = {{
  TType::T_I16,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_BYTE,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 16> TStructDataStorage<::nebula::cpp2::Value>::fields_names = {{
  "nVal",
  "bVal",
  "iVal",
  "fVal",
  "sVal",
  "dVal",
  "tVal",
  "dtVal",
  "vVal",
  "eVal",
  "pVal",
  "lVal",
  "mVal",
  "uVal",
  "gVal",
  "ggVal",
}};
const std::array<int16_t, 16> TStructDataStorage<::nebula::cpp2::Value>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
}};
const std::array<protocol::TType, 16> TStructDataStorage<::nebula::cpp2::Value>::fields_types = {{
  TType::T_I32,
  TType::T_BOOL,
  TType::T_I64,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::NList>::fields_names = {{
  "values",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::NList>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::NList>::fields_types = {{
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::NMap>::fields_names = {{
  "kvs",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::NMap>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::NMap>::fields_types = {{
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::NSet>::fields_names = {{
  "values",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::NSet>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::NSet>::fields_types = {{
  TType::T_SET,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::Row>::fields_names = {{
  "values",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::Row>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::Row>::fields_types = {{
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::DataSet>::fields_names = {{
  "column_names",
  "rows",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::DataSet>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::DataSet>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::Coordinate>::fields_names = {{
  "x",
  "y",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::Coordinate>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::Coordinate>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_DOUBLE,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::Point>::fields_names = {{
  "coord",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::Point>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::Point>::fields_types = {{
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::LineString>::fields_names = {{
  "coordList",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::LineString>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::LineString>::fields_types = {{
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::Polygon>::fields_names = {{
  "coordListList",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::Polygon>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::Polygon>::fields_types = {{
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::nebula::cpp2::Geography>::fields_names = {{
  "ptVal",
  "lsVal",
  "pgVal",
}};
const std::array<int16_t, 3> TStructDataStorage<::nebula::cpp2::Geography>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::nebula::cpp2::Geography>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::Tag>::fields_names = {{
  "name",
  "props",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::Tag>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::Tag>::fields_types = {{
  TType::T_STRING,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::Vertex>::fields_names = {{
  "vid",
  "tags",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::Vertex>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::Vertex>::fields_types = {{
  TType::T_STRUCT,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::nebula::cpp2::Edge>::fields_names = {{
  "src",
  "dst",
  "type",
  "name",
  "ranking",
  "props",
}};
const std::array<int16_t, 6> TStructDataStorage<::nebula::cpp2::Edge>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::nebula::cpp2::Edge>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_I32,
  TType::T_STRING,
  TType::T_I64,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::nebula::cpp2::Step>::fields_names = {{
  "dst",
  "type",
  "name",
  "ranking",
  "props",
}};
const std::array<int16_t, 5> TStructDataStorage<::nebula::cpp2::Step>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::nebula::cpp2::Step>::fields_types = {{
  TType::T_STRUCT,
  TType::T_I32,
  TType::T_STRING,
  TType::T_I64,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::Path>::fields_names = {{
  "src",
  "steps",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::Path>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::Path>::fields_types = {{
  TType::T_STRUCT,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::HostAddr>::fields_names = {{
  "host",
  "port",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::HostAddr>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::HostAddr>::fields_types = {{
  TType::T_STRING,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::KeyValue>::fields_names = {{
  "key",
  "value",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::KeyValue>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::KeyValue>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::LogInfo>::fields_names = {{
  "log_id",
  "term_id",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::LogInfo>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::LogInfo>::fields_types = {{
  TType::T_I64,
  TType::T_I64,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::DirInfo>::fields_names = {{
  "root",
  "data",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::DirInfo>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::DirInfo>::fields_types = {{
  TType::T_STRING,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::NodeInfo>::fields_names = {{
  "host",
  "dir",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::NodeInfo>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::NodeInfo>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::nebula::cpp2::PartitionBackupInfo>::fields_names = {{
  "info",
}};
const std::array<int16_t, 1> TStructDataStorage<::nebula::cpp2::PartitionBackupInfo>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::nebula::cpp2::PartitionBackupInfo>::fields_types = {{
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::CheckpointInfo>::fields_names = {{
  "partition_info",
  "path",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::CheckpointInfo>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::CheckpointInfo>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::nebula::cpp2::LogEntry>::fields_names = {{
  "cluster",
  "log_str",
}};
const std::array<int16_t, 2> TStructDataStorage<::nebula::cpp2::LogEntry>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::nebula::cpp2::LogEntry>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache
