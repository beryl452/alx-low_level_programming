#include <stdio.h>
#include <stdlib.>
#include <time.h>
/**
 * main - Entry point
 * Display all alphabet letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int count;
do {
	putchar(c);
	if (c!='z')
	{
	c = 'A';
	count = 0;
	}
	count++;
	c++;
} while (count < 26);
putchar('$');
return (0);
}
