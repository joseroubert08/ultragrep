#ifndef __JSON_REQ_H__
#define __JSON_REQ_H__
#include "req_matcher.h"

req_matcher_t *json_req_matcher(on_req fn1, on_err fn2, void *arg);
#endif
