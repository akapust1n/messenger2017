#include "Response.h"

using namespace m2::server;

int Response::getCode() const {
  return m_code;
}
const std::string Response::getDescription() const {
  return m_description;
}
Response::Response(const int code, const std::string description)
    : m_code(code),
      m_description(description) {
}
