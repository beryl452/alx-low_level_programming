#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n);
{
int tmp, i;

for (i = 0; i < n; i++, n--)
{
tmp = a[i];
a[i] = a[n - i];
a[n - i] = tmp;
}
}
