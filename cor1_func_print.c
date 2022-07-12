#include "main.h"

/**
 * cor1_func_print - This function returns the amount of identifiers.
 * @c: This is a char argument indentifier
 * @idx: This is the index of argument identifier.
 * Return: amount of identifiers.
 */
int cor1_func_print(const char *c, int idx)
{
	func_point pr[] = {
		{"c", print_c}, {"s", print_s}, {"i", print_id},
		{"d", print_id}, {"%", print_other}, {"l", print_other},
		{"h", print_other}, {NULL, NULL},
	};
	int x = 0, y = 0, fst_index;

	fst_index = idx;
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
			idx = fst_index;
		}
	}
	return (y);
}
