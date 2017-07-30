#ifndef SERVER_LOGINUSER_H
#define SERVER_LOGINUSER_H
#include "Request.h"

namespace m2 {
namespace server {

class LoginUser : public Request {
  LoginUser(const int code, const std::string string);
};
}
}

#endif //SERVER_LOGINUSER_H
