#pragma once

#include <vector>

#include "b_plus_tree.h"
#include "common.h"
#include "disk_manager.h"

namespace sse {
class Table {
 public:
  Table(/* args */);
  ~Table();

 private:
  std::string table_name_;
  std::string table_file_;
  Attribute attrs_[AttributeNums];
  std::vector<BPlusTree> bp_indexes_;
  DiskManager disk_manager_;
};

}  // namespace sse