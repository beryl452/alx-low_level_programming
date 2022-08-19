#include "main.h"

/**
 * binary_to_uint -convert binary num to an uint
 * @b: string containing 0 and 1
 *
 * Return: binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_nb = 0;
	int len = 0, i;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);
		if (b[i] == '1)
			bin_nb += (1 * (1 << len));
		i++;
		len--;
	}
	return (bin_nb);
}
