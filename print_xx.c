#include "main.h"

/**
 * print_xx - This function prints a decimal in hexadecimal
 * @arguments: The character to print
 * @bu: buffer pointer
 * @i_bu: index for buffer pointer
 * Return: Function returns number of chars printed
 */
int print_xx(va_list arguments, char *bu, unsigned int i_bu)
{
	int int_input, x, isnegative, count, first_digit;
	char *hex, *b;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		i_bu = buffer_handle(bu, '0', i_bu);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	b = malloc(sizeof(char) * (32 + 1));
	b = binary_arr(b, int_input, isnegative, 32);
	hex = malloc(sizeof(char) * (8 + 1));
	hex = hex_arr(b, hex, 1, 8);
	for (first_digit = x = count = 0; hex[x]; x++)
	{
		if (hex[x] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			i_bu = buffer_hand(bu, hex[x], i_bu);
			count++;
		}
	}
	free(b);
	free(hex);
	return (count);
}
