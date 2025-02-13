/*************************************************************************
	> File Name: common.h
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Feb 2025 03:03:15 PM CST
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>
#include <sys/stat.h>

#define ERROR_CHECK(ret, trg, msg) {if (ret == trg) {fprintf(stderr, "%s", msg); return -1;}}



#endif
