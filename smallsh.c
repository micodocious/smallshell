#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE 700
/* 1 includes */
#include <fcntl.h>
#include <stdbool.h>
//#include <sys/wait.h>
#include <sys/stat.h>
//#include <err.h>
#include <errno.h>
#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// main.c
#include "utils.h"

int main(void) {
    printMessage();
    return EXIT_SUCCESS;
}