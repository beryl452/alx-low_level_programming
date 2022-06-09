#include <stdio.h>
#include "main.h"

/**
 * prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; i++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
