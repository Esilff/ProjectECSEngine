#include "logger.h"
#include <stdio.h>

void defaultLog(const char* message, LogLevel level) {
    printf("[%s] : %s\n",(level == LOG) ? "LOG" : (level == WARNING) ? "WARNING" : "ERROR", message);
}

Logger getLogger() {
    Logger logger = {
        .log = defaultLog
    };
    return logger;
}