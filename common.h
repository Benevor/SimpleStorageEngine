#pragma once

#include <string>

namespace sse {
#define AttributeNums 100
#define TupleSize 800
#define AttributeLength uint8_t

enum AttributeType { CHAR };
enum CompareType { EQUAL = 1, GREATER, LESS, NOT_EQUAL, GREATER_OR_EQUAL, LESS_OR_EQUAL };
enum SetType { AND = 1, OR };

struct Attribute {
  std::string attr_name;
  AttributeType attr_type;
  AttributeLength attr_length;
};

struct Expression {
  std::string table_name;
  std::string attr_name;
  CompareType comparetype;
  char value;
};

}  // namespace sse