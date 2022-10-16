#pragma once

#include <vector>

#include "table.h"
#include "tuple.h"

namespace sse {
class StorageEngine {
 public:
  StorageEngine(/* args */);
  ~StorageEngine();

  /*TODO: Is there a better return value type, This is too wasteful, Are there any security issues with returning
   * pointers?*/
  std::vector<Tuple> range_query(std::string table_name, std::vector<Expression> exps, std::vector<SetType> set_ops);

  std::vector<Tuple> point_query(std::string table_name, Expression exp);

  bool insert_one_tuple(std::string table_name, std::vector<char>);

 private:
  Table tables[1];
};
}  // namespace sse