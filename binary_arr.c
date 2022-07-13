#include "main.h"

/**
 * binary_arr - prints decimal in binary
 *
 * @b: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *binary_arr(char *b, long int int_in, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		b[i] = '0';
	b[limit] = '\0';
	for (i = limit - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			b[i] = '0';
		else
			b[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		b[i] = '1';
	if (isneg)
	{
		for (i = 0; b[i]; i++)
			if (b[i] == '0')
				b[i] = '1';
			else
				b[i] = '0';
	}
	return (b);
}
