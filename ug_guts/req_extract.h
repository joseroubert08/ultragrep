#ifndef __REQ_EXTRACT_H__
#define __REQ_EXTRACT_H__

#include <time.h>

#define WAITING_PATTERN 0
#define IN_REQ 1
#define REQ_COMPLETE 2
#define EOF_REACHED 3
#define STOP_SIGNAL 4

typedef struct {
    char **buf;
    int lines;
    time_t time;
    int state;
    int(*matcher)(char*, ssize_t, time_t*);
}request_t;

#endif
