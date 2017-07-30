#ifndef SERVER_REQUEST_H
#define SERVER_REQUEST_H
#include "string"

namespace m2 {
namespace server {

class Request {
 public:
  Request(const int code, const  std::string description);
  virtual void process() = 0;
  std::string getDescription() const;
  int getCode() const;

 protected:
  int m_code;
  std::string m_description;
};
}
}

#endif //SERVER_REQUEST_H
