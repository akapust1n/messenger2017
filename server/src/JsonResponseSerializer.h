#ifndef SERVER_JSONRESPONSESERIALIZER_H
#define SERVER_JSONRESPONSESERIALIZER_H
#include "memory"
#include "Response/Response.h"

namespace m2 {
namespace server {

class JsonResponseSerializer {
 public:
  enum Responses{
    LoginOk,
    RegistsrationOk
  };
 public:
  JsonResponseSerializer() = default;
  std::unique_ptr<Response> getResponse(Responses kind);

};
}
}
#endif //SERVER_JSONRESPONSESERIALIZER_H
