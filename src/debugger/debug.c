#include "debug/debug.h"
#include <stdio.h>

void defaultLog(const char* message, LogLevel level) {
    printf(message);
}

Debug getDebugger() {
    Debug debugger = {
        .log = defaultLog
    };
    return debugger;
}