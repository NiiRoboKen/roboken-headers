#include "../roboken.h"

using namespace roboken::interface;

Logger::Logger(Logger::Level level, const char* logger_name, bool output) {
  this->level = level;
  this->logger_name = logger_name;
  this->output = output;
}

void Logger::debug(const char* message) {
  if (this->level > Logger::Level::Debug || !this->output) {
    return;
  }
  this->print_debug(message);
}

void Logger::info(const char* message) {
  if (this->level > Logger::Level::Info || !this->output) {
    return;
  }
  this->print_info(message);
}

void Logger::warn(const char* message) {
  if (this->level > Logger::Level::Warn || !this->output) {
    return;
  }
  this->print_warn(message);
}

void Logger::error(const char* message) {
  if (this->level > Logger::Level::Error || !this->output) {
    return;
  }
  this->print_error(message);
}

void Logger::set_output(bool output) { this->output = output; }
