#include "main.h"


/**
 * _printf - This functions like printf, prints formatted to stdout
 *
 * @format: input string.
 *
 * Return: Returns formatted input to stdout
 */
int _printf(const char *format, ...)
{
	unsigned int x = 0, len = 0, i_bu = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *bu;

	va_start(arguments, format), bu = malloc(sizeof(char) * 1024);
	if (!format || !bu || (format[x] == '%' && !format[x + 1]))
		return (-1);
	if (!format[x])
		return (0);
	for (x = 0; format && format[x]; x++)
	{
		if (format[x] == '%')
		{
			if (format[x + 1] == '\0')
			{	print_chr_buf(bu, i_bu), free(bu), va_end(arguments);
				return (-1);
			}
			else
			{	function = cor2_func_print(format, x + 1);
				if (function == NULL)
				{
					if (format[x + 1] == ' ' && !format[x + 2])
						return (-1);
					buffer_hand(bu, format[x], i_bu), len++, x--;
				}
				else
				{
					len += function(arguments, bu, i_bu);
					x += cor1_func_print(format, x + 1);
				}
			} x++;
		}
		else
			buffer_hand(bu, format[x], i_bu), len++;
		for (i_bu = len; i_bu > 1024; i_bu -= 1024)
			;
	}
	print_chr_buf(bu, i_bu), free(bu), va_end(arguments);
	return (len);
}
