#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Check if last digital of number is upper of 5,
 * lower of 6 and upper of 0 or equal to 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (n < 6 && n > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
return (0);
}
