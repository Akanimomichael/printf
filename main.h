#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - the struct defined for printer functions
 * @type_arg: identifier
 * @f: printer functions
 *
 * Description: function pointer 
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} func_point;

int _printf(const char *format, ...);
int cor1_func_print(const char *c, int idx);
unsigned int buffer_hand(char *bu, char c, unsigned int i_bu);
int (*cor2_func_print(const char *c, int idx))(va_list, char *, unsigned int);
int print_chr_buf(char *bu, unsigned int i_bu);
int print_c(va_list arguments, char *bu, unsigned int i_bu);
int print_id(va_list arguments, char *bu, unsigned int i_bu);
int print_s(va_list arguments, char *bu, unsigned int i_bu);
int print_other(va_list a __attribute__((unused)), char *bu, unsigned int x);

#endif
