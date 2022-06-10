#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: is the number of times the character \
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}

}
