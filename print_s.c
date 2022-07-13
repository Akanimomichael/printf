#include "main.h"

/**
 * print_s - The function writes the string to stdout
 * @arguments: input string
 * @bu: This is the buffer pointer
 * @i_bu: This is the index for buffer pointer
 * Return: Function returns int on success.
 */
int print_s(va_list arguments, char *bu, unsigned int i_bu)
{
	char *s;
	unsigned int x;
	char nill[] = "(null)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (x = 0; nill[x]; x++)
			i_bu = buffer_hand(bu, nill[x], i_bu);
		return (6);
	}
	for (x = 0; s[x]; x++)
		i_bu = buffer_hand(bu, s[x], i_bu);
	return (x);
}
