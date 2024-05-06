#ifndef ROBOKEN_HEADERS_INTERFACE_LOGGER_H
#define ROBOKEN_HEADERS_INTERFACE_LOGGER_H

class Logger {
 public:
  enum class Level { Debug, Info, Warn, Error };
  Logger(Logger::Level level, const char* logger_name, bool output);
  void debug(const char* message);
  void info(const char* message);
  void warn(const char* message);
  void error(const char* message);
  void set_output(bool output);

 private:
  virtual void print_debug(const char* message) = 0;
  virtual void print_info(const char* message) = 0;
  virtual void print_warn(const char* message) = 0;
  virtual void print_error(const char* message) = 0;

 protected:
  Level level;
  const char* logger_name;
  bool output;
};

#endif
