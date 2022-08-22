#ifndef MAIN
#define MAIN

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
