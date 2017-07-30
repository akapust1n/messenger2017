#include "Request.h"

using namespace m2::server;

Request::Request(const int code, const std::string description) {

}

int Request::getCode() const {
  return m_code;
}
std::string Request::getDescription() const {
  return m_description;
}

