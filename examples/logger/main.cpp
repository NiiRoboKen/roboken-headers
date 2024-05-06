#include <iostream>

#include "../../src/roboken.h"

using namespace roboken::interface;
using namespace std;

class ConsoleLogger : public Logger {
 public:
  using Logger::Logger;

 private:
  void print_debug(const char* message) override {
    cout << this->logger_name << " [Debug] " << message << endl;
  }
  void print_info(const char* message) override {
    cout << this->logger_name << " [Info] " << message << endl;
  }
  void print_warn(const char* message) override {
    cout << this->logger_name << " [Warn] " << message << endl;
  }
  void print_error(const char* message) override {
    cout << this->logger_name << " [Error] " << message << endl;
  }
};

int main() {
  char* buffer[1000];
  ConsoleLogger logger(ConsoleLogger::Level::Info, "Example", true);
  logger.debug("debug message");
  logger.info("info message");
  logger.warn("warn message");
  logger.error("error message");
}
