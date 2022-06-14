#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
int  length, i;

length = strlen(s);
for (i = (length - 1); i >= 0; i--)
	printf("%c", *(s + i));
}
