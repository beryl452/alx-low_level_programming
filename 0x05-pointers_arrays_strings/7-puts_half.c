#include "main.h"

/**
 * puts_half - printf half
 * @str: the string
 * Return: Void
 */

void puts_half(char *str)
{
	int length, i;

	length = strlen(str);
	if (length % 2 == 1)
	{
	i = (length - 1) / 2;
	}
	else
	{
	i = length / 2;
	}
	for (; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
}
