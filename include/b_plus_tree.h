#pragma once

#include "disk_manager.h"

namespace sse {
class BPlusTree {
 public:
  BPlusTree(/* args */);
  ~BPlusTree();

 private:
  std::string table_name_;
  Attribute attr_;
  DiskManager disk_manager_;
};

}  // namespace sse