#include "main.h"
/**
 * print_sign - prints the sign of @n number
 * @n: the number to be checked
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0
 */
int print_sign(int n)
{
if (n > 1)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-1');
return (-1);
}
}
