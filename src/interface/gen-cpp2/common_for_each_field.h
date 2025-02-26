/**
 * Autogenerated by Thrift for common.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "common_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::nebula::cpp2::SchemaID> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).tag_id_ref()...);
    f(1, static_cast<T&&>(t).edge_type_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Date> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).year_ref()...);
    f(1, static_cast<T&&>(t).month_ref()...);
    f(2, static_cast<T&&>(t).day_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Time> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).hour_ref()...);
    f(1, static_cast<T&&>(t).minute_ref()...);
    f(2, static_cast<T&&>(t).sec_ref()...);
    f(3, static_cast<T&&>(t).microsec_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::DateTime> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).year_ref()...);
    f(1, static_cast<T&&>(t).month_ref()...);
    f(2, static_cast<T&&>(t).day_ref()...);
    f(3, static_cast<T&&>(t).hour_ref()...);
    f(4, static_cast<T&&>(t).minute_ref()...);
    f(5, static_cast<T&&>(t).sec_ref()...);
    f(6, static_cast<T&&>(t).microsec_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Value> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).nVal_ref()...);
    f(1, static_cast<T&&>(t).bVal_ref()...);
    f(2, static_cast<T&&>(t).iVal_ref()...);
    f(3, static_cast<T&&>(t).fVal_ref()...);
    f(4, static_cast<T&&>(t).sVal_ref()...);
    f(5, static_cast<T&&>(t).dVal_ref()...);
    f(6, static_cast<T&&>(t).tVal_ref()...);
    f(7, static_cast<T&&>(t).dtVal_ref()...);
    f(8, static_cast<T&&>(t).vVal_ref()...);
    f(9, static_cast<T&&>(t).eVal_ref()...);
    f(10, static_cast<T&&>(t).pVal_ref()...);
    f(11, static_cast<T&&>(t).lVal_ref()...);
    f(12, static_cast<T&&>(t).mVal_ref()...);
    f(13, static_cast<T&&>(t).uVal_ref()...);
    f(14, static_cast<T&&>(t).gVal_ref()...);
    f(15, static_cast<T&&>(t).ggVal_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::NList> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).values_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::NMap> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).kvs_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::NSet> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).values_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Row> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).values_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::DataSet> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).column_names_ref()...);
    f(1, static_cast<T&&>(t).rows_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Geography> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).wkb_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Tag> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).name_ref()...);
    f(1, static_cast<T&&>(t).props_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Vertex> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).vid_ref()...);
    f(1, static_cast<T&&>(t).tags_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Edge> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).src_ref()...);
    f(1, static_cast<T&&>(t).dst_ref()...);
    f(2, static_cast<T&&>(t).type_ref()...);
    f(3, static_cast<T&&>(t).name_ref()...);
    f(4, static_cast<T&&>(t).ranking_ref()...);
    f(5, static_cast<T&&>(t).props_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Step> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).dst_ref()...);
    f(1, static_cast<T&&>(t).type_ref()...);
    f(2, static_cast<T&&>(t).name_ref()...);
    f(3, static_cast<T&&>(t).ranking_ref()...);
    f(4, static_cast<T&&>(t).props_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::Path> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).src_ref()...);
    f(1, static_cast<T&&>(t).steps_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::HostAddr> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).host_ref()...);
    f(1, static_cast<T&&>(t).port_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::KeyValue> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).key_ref()...);
    f(1, static_cast<T&&>(t).value_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::LogInfo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).log_id_ref()...);
    f(1, static_cast<T&&>(t).term_id_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::DirInfo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).root_ref()...);
    f(1, static_cast<T&&>(t).data_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::NodeInfo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).host_ref()...);
    f(1, static_cast<T&&>(t).dir_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::PartitionBackupInfo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).info_ref()...);
  }
};

template <>
struct ForEachField<::nebula::cpp2::CheckpointInfo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).partition_info_ref()...);
    f(1, static_cast<T&&>(t).path_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
