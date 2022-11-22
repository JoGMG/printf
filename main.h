#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct symfunc - defines a structure for symbols and functions.
 * @sym: The operator.
 * @f: The function associated.
**/
struct symfunc
{
	char *sym;
	int (*f)(va_list);
};
typedef struct symfunc sym_func;

/* Functions */
int _printf(const char *format, ...);
int parser(const char *format, sym_func f_list[], va_list arg_list);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif
