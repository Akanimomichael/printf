#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct printfunction - the struct defined for printer functions
 * @type_arg: this is an identifier
 * @pf: this is a printer functions
 *
 * Description: This is a struct that stores pointer functions
 */
typedef struct printerfunctions
{
	char *type_arg;
	int (*pf)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);

#endif
