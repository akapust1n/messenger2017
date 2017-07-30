#include "JsonRequestParser.h"
using namespace m2::server;

std::unique_ptr<Request> m2::server::JsonRequestParser::getRequst() {

  return std::move(std::unique_ptr<Request>());
}
