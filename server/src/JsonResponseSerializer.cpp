#include "JsonResponseSerializer.h"
using namespace m2::server;

std::unique_ptr<Response> JsonResponseSerializer::getResponse(m2::server::JsonResponseSerializer::Responses kind) {
  return std::move(std::unique_ptr<Response>());
}
