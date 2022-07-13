#include "main.h"
#include <stdio.h>

/**
 * print_other - writes the character c to stdout and unidentified flag
 *
 * @a: input char
 * @bu: This is the buffer pointer
 * @x: This is the index for buffer
 * Return: function returns 1 on success
 */
int print_other(va_list a __attribute__((unused)), char *bu, unsigned int x)
{
	buffer_hand(bu, '%', x);

	return (1);
}
