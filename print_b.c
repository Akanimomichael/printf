#include "main.h"

/**
 * print_b - This function prints decimal in binary
 * @arguments: input string
 * @bu: This is a buffer pointer
 * @i_bu: This is the index for buffer pointer
 * Return: number of chars printed.
 */
int print_b(va_list arguments, char *bu, unsigned int i_bu)
{
	int int_input, count, x, first_fig, isnegative;
	char *b;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		i_bu = buffer_hand(bu, '0', i_bu);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	b = malloc(sizeof(char) * (32 + 1));
	b = fill_binary_array(b, int_input, isnegative, 32);
	first_fig = 0;
	for (count = x = 0; b[x]; x++)
	{
		if (first_fig == 0 && b[x] == '1')
			first_fig = 1;
		if (first_fig == 1)
		{
			i_bu = buffer_hand(bu, b[x], i_bu);
			count++;
		}
	}
	free(b);
	return (count);
}
