#include "main.h"

/**
 * cor2_func_print - selects the correct function to perform the operation.
 * @c: This is a char argument indentifier
 * @idx: This is an index for argument indentifier
 * Return: returns a pointer.
 */
int (*cor2_func_print(const char *c, int idx))(va_list, char *, unsigned int)
{
	func_point pr[] = {
		{"c", print_c}, {"s", print_s},
		{"i", print_id}, {"d", print_id},
		{"%", print_other}, {"l", print_other},
		{"h", print_other}, {" %", print_other},
		{"b", print_b}, {"u", print_u},
		{"o", print_o}, {"x", print_x},
		{"X", print_xx}, {NULL, NULL},
	};
	int x = 0, y = 0, first_index;

	first_index = idx;
	while (pr[x].type_arg)
	{
		if (c[idx] == pr[x].type_arg[y])
		{
			if (pr[x].type_arg[y + 1] != '\0')
				idx++, y++;
			else
				break;
		}
		else
		{
			y = 0;
			x++;
			idx = first_index;
		}
	}
	return (pr[x].f);
}
