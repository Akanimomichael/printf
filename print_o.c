#include "main.h"

/**
 * print_o - This function prints decimal number in octal format
 * @arguments: input number
 * @bu: buffer pointer
 * @i_bu: This is the index for buffer pointer
 * Return: Function returns number of chars printed.
 */
int print_o(va_list arguments, char *bu, unsigned int i_bu)
{
	int int_input, x, isnegative, count, first_digit;
	char *o, *b;

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
	b = binary_arr(b, int_input, isnegative, 32);
	o = malloc(sizeof(char) * (11 + 1));
	o = oct_arr(b, o);
	for (first_digit = x = count = 0; o[x]; x++)
	{
		if (o[x] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			i_bu = buffer_hand(bu, o[x], i_bu);
			count++;
		}
	}
	free(b);
	free(o);
	return (count);
}
