#ifndef DEBUG_H
#define DEBUG_H

enum loglevel {
    LOG,
    WARNING,
    ERROR
};

typedef enum loglevel LogLevel;

struct debug {
    void (*log)(const char* message, LogLevel level);
};

typedef struct debug Debug;

Debug getDebugger();

#endif