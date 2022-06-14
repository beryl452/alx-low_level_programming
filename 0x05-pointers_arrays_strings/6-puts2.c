#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: the string
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; i < strlen(str); i++)
	_putchar(str[i]);
_putchar('\n');
}
