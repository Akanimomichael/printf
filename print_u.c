#include "main.h"
/**
 * print_u - This function prints an unsigned integer
 * @arguments: This is the number of arguements to print
 * @bu: buffer pointer
 * @i_bu: Ths is the index for buffer pointer
 * Return: Function returns int, number of chars printed.
 */
int print_u(va_list arguments, char *bu, unsigned int i_bu)
{
	unsigned int int_in, int_temp, x, div;

	int_in = va_arg(arguments, unsigned int);
	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (x = 0; div > 0; div /= 10, x++)
	{
		i_bu = buffer_hand(bu, ((int_in / div) % 10) + '0', i_bu);
	}
	return (x);
}
