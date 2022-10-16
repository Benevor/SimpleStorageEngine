#pragma once

#include "common.h"
#include "tuple.h"

namespace sse {
class DiskManager {
 public:
  DiskManager(/* args */);
  ~DiskManager();

  bool write_to_disk(int offset, int size, std::vector<Tuple> values);
  std::vector<Tuple> read_from_disk(int offset, int size);

 private:
  std::string filename;
};

}  // namespace sse