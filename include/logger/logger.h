#ifndef DEBUG_H
#define DEBUG_H

enum loglevel {
    LOG,
    WARNING,
    ERROR
};

typedef enum loglevel LogLevel;

struct logger {
    void (*log)(const char* message, LogLevel level);
};

typedef struct logger Logger;

Logger getLogger();

#endif