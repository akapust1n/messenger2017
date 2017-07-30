#ifndef SERVER_JSONREQUESTPARSER_H
#define SERVER_JSONREQUESTPARSER_H
#include <memory>
#include "Request/Request.h"

namespace m2 {
namespace server {

class JsonRequestParser {
 public:
  JsonRequestParser() = default;
  std::unique_ptr<Request> getRequst();
};
}
}
#endif //SERVER_JSONREQUESTPARSER_H
