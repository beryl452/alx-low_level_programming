#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
