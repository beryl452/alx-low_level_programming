#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @c: the character to be checked
 * Return: A last digit of @c
 */
int print_last_digit(int c)
{
_putchar(c % 10);
return (c % 10);
}
