#ifndef SERVER_REGISTERUSER_H
#define SERVER_REGISTERUSER_H
#include "Request.h"

namespace m2 {
namespace server {

class RegisterUser : public Request {
 public:
  RegisterUser() = default;
  void process() override;

};
}
}

#endif //SERVER_REGISTERUSER_H
