#pragma once

#include "table.h"

namespace sse {
class Tuple {
 public:
  Tuple(/* args */);
  ~Tuple();

 private:
  char *data_;
  Table *table_;
};

Tuple::Tuple(/* args */) {}

Tuple::~Tuple() {}

}  // namespace sse