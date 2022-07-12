#include "main.h"

/**
 * handl_buf - joins char
 * @buf: buffer pointer
 * @c: char
 * @ibuf: index of buffer pointer
 * Return: i_bu index.
 */
unsigned int buffer_hand(char *bu, char c, unsigned int i_bu)
{
	if (i_bu == 1024)
	{
		print_chr_buf(bu, i_bu);
		i_bu = 0;
	}
	bu[i_bu] = c;
	i_bu++;
	return (i_bu);
}
