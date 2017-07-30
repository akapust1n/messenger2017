#ifndef SERVER_RESPONSE_H
#define SERVER_RESPONSE_H
#include "string"

namespace m2 {
namespace server {

class Response {
 public:
  Response(const int code, const std::string description);
  int getCode() const;
  const std::string getDescription() const;
  virtual void serialize() = 0;
 protected:
  int m_code;
  std::string m_description;
};
}
}
#endif //SERVER_RESPONSE_H
