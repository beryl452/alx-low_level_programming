#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

void _putchar(char c);
ssize_t readtextfile(const char *filename, size_t letters);

#endif /* MAIN_H */
