#include "main.h"
/**
 * print_alphabet - prints alphabet letters in lowercase
 * Prints alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char letter = 'a';
	int count;

do {
	putchar(letter);
	count++;
	letter++;
} while (count < 26);
putchar('\n');
return (0);
}
