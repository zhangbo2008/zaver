
/*
 * Copyright (C) Zhu Jiashun
 * Copyright (C) Zaver
 */

//到事发地时 

//还是使用dev-c++来看代码,因为只有devcpp支持ctrl点击函数,跳到函数说明. 
#ifndef DBG_H
#define DBG_H

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "DEBUG %s:%d: " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#endif

#define clean_errno() (errno == 0 ? "None" : strerror(errno))
//大量使用宏定义,可以在编译时候就处理了很多判断.加速了代码效率 

//log级别.定义3个函数. 这种不使用栈来调用,只是函数替换,
//所以小函数都要用宏替换来写.才快. 
#define log_err(M, ...) fprintf(stderr, "[ERROR] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_warn(M, ...) fprintf(stderr, "[WARN] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_info(M, ...) fprintf(stderr, "[INFO] (%s:%d) " M "\n", __FILE__, __LINE__, ##__VA_ARGS__)

#define check(A, M, ...) if(!(A)) { log_err(M "\n", ##__VA_ARGS__); /* exit(1); */ }

#define check_exit(A, M, ...) if(!(A)) { log_err(M "\n", ##__VA_ARGS__); exit(1);}

#define check_debug(A, M, ...) if(!(A)) { debug(M "\n", ##__VA_ARGS__); /* exit(1); */}

#endif
