#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
int length, i;

length = strlen(s);
for (i = length; i > 0; i--)
	printf("%c", *(s + i));
}
