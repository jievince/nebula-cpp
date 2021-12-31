/**
 * Autogenerated by Thrift for meta.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "meta_types.h"
#include "common_metadata.h"

namespace nebula {
namespace meta {
namespace cpp2 {
class MetaServiceSvIf;
}}} // namespace nebula::meta::cpp2

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::nebula::meta::cpp2::AlterSchemaOp> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::RoleType> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::GeoShape> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::IsolationLevel> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::HostStatus> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::SnapshotStatus> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::AdminJobOp> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::AdminCmd> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::JobStatus> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::ListHostType> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::HostRole> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::TaskResult> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::ConfigModule> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::ConfigMode> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::ListenerType> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::FTServiceType> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::nebula::meta::cpp2::QueryStatus> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ID> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ColumnTypeDef> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ColumnDef> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SchemaProp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::Schema> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::IdName> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SpaceDesc> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SpaceItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::TagItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AlterSchemaItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::EdgeItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::IndexItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::HostItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::UserItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RoleItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ExecResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AdminJobReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::JobDesc> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::TaskDesc> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AdminJobResult> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AdminJobResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::Correlativity> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::StatsItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateSpaceReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateSpaceAsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropSpaceReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSpacesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSpacesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetSpaceReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetSpaceResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateTagReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AlterTagReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropTagReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListTagsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListTagsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetTagReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetTagResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateEdgeReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AlterEdgeReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetEdgeReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetEdgeResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropEdgeReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListEdgesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListEdgesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AddHostsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropHostsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListHostsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListHostsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::PartItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListPartsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListPartsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetPartsAllocReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetPartsAllocResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::MultiPutReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::MultiGetReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::MultiGetResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RemoveReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RemoveRangeReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ScanReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ScanResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::HBResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::LeaderInfo> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::PartitionList> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::HBReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::IndexFieldDef> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateTagIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropTagIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetTagIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetTagIndexResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListTagIndexesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListTagIndexesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateEdgeIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropEdgeIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetEdgeIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetEdgeIndexResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListEdgeIndexesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListEdgeIndexesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RebuildIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateUserReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropUserReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AlterUserReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GrantRoleReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RevokeRoleReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListUsersReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListUsersResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListRolesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListRolesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetUserRolesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ChangePasswordReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::BalanceTask> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ConfigItem> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RegConfigReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetConfigReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetConfigResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SetConfigReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListConfigsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListConfigsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateSnapshotReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropSnapshotReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSnapshotsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::Snapshot> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSnapshotsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListIndexStatusReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::IndexStatus> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListIndexStatusResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::MergeZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SplitZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RenameZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AddHostsIntoZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetZoneReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetZoneResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListZonesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::Zone> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListZonesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::AddListenerReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RemoveListenerReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListListenerReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListenerInfo> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListListenerResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetStatsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetStatsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::BackupInfo> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SpaceBackupInfo> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::BackupMeta> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateBackupReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateBackupResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::HostPair> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RestoreMetaReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::FTClient> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SignInFTServiceReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::SignOutFTServiceReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListFTClientsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListFTClientsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::FTIndex> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateFTIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::DropFTIndexReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListFTIndexesReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListFTIndexesResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::QueryDesc> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::Session> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateSessionReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::CreateSessionResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::UpdateSessionsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::UpdateSessionsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSessionsReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListSessionsResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetSessionReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetSessionResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::RemoveSessionReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::KillQueryReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ReportTaskReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListClusterInfoResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::ListClusterInfoReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetMetaDirInfoResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::GetMetaDirInfoReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::VerifyClientVersionResp> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::nebula::meta::cpp2::VerifyClientVersionReq> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::nebula::meta::cpp2::MetaServiceSvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_createSpace(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropSpace(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getSpace(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listSpaces(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createSpaceAs(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createTag(ThriftMetadata& metadata, ThriftService& context);
  static void gen_alterTag(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropTag(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getTag(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listTags(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createEdge(ThriftMetadata& metadata, ThriftService& context);
  static void gen_alterEdge(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropEdge(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getEdge(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listEdges(ThriftMetadata& metadata, ThriftService& context);
  static void gen_addHosts(ThriftMetadata& metadata, ThriftService& context);
  static void gen_addHostsIntoZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropHosts(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listHosts(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getPartsAlloc(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listParts(ThriftMetadata& metadata, ThriftService& context);
  static void gen_multiPut(ThriftMetadata& metadata, ThriftService& context);
  static void gen_get(ThriftMetadata& metadata, ThriftService& context);
  static void gen_multiGet(ThriftMetadata& metadata, ThriftService& context);
  static void gen_remove(ThriftMetadata& metadata, ThriftService& context);
  static void gen_removeRange(ThriftMetadata& metadata, ThriftService& context);
  static void gen_scan(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createTagIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropTagIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getTagIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listTagIndexes(ThriftMetadata& metadata, ThriftService& context);
  static void gen_rebuildTagIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listTagIndexStatus(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createEdgeIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropEdgeIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getEdgeIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listEdgeIndexes(ThriftMetadata& metadata, ThriftService& context);
  static void gen_rebuildEdgeIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listEdgeIndexStatus(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createUser(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropUser(ThriftMetadata& metadata, ThriftService& context);
  static void gen_alterUser(ThriftMetadata& metadata, ThriftService& context);
  static void gen_grantRole(ThriftMetadata& metadata, ThriftService& context);
  static void gen_revokeRole(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listUsers(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listRoles(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getUserRoles(ThriftMetadata& metadata, ThriftService& context);
  static void gen_changePassword(ThriftMetadata& metadata, ThriftService& context);
  static void gen_heartBeat(ThriftMetadata& metadata, ThriftService& context);
  static void gen_regConfig(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getConfig(ThriftMetadata& metadata, ThriftService& context);
  static void gen_setConfig(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listConfigs(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createSnapshot(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropSnapshot(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listSnapshots(ThriftMetadata& metadata, ThriftService& context);
  static void gen_runAdminJob(ThriftMetadata& metadata, ThriftService& context);
  static void gen_mergeZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_splitZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_renameZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getZone(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listZones(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createBackup(ThriftMetadata& metadata, ThriftService& context);
  static void gen_restoreMeta(ThriftMetadata& metadata, ThriftService& context);
  static void gen_addListener(ThriftMetadata& metadata, ThriftService& context);
  static void gen_removeListener(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listListener(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getStats(ThriftMetadata& metadata, ThriftService& context);
  static void gen_signInFTService(ThriftMetadata& metadata, ThriftService& context);
  static void gen_signOutFTService(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listFTClients(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createFTIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_dropFTIndex(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listFTIndexes(ThriftMetadata& metadata, ThriftService& context);
  static void gen_createSession(ThriftMetadata& metadata, ThriftService& context);
  static void gen_updateSessions(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listSessions(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getSession(ThriftMetadata& metadata, ThriftService& context);
  static void gen_removeSession(ThriftMetadata& metadata, ThriftService& context);
  static void gen_killQuery(ThriftMetadata& metadata, ThriftService& context);
  static void gen_reportTaskFinish(ThriftMetadata& metadata, ThriftService& context);
  static void gen_listCluster(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getMetaDirInfo(ThriftMetadata& metadata, ThriftService& context);
  static void gen_verifyClientVersion(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
