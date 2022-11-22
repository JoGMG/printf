#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
**/
struct flags
{
	int plus;
	int space;
	int hash;
}
typedef struct flags flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
**/
struct printHandler
{
	char c
	int (*f)(va_list ap, flags_t *f)
}
typedef struct ph;


/* Functions */
int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);

int (select_print(char s))(va_list, flags_t *);

int print_char(va_list l, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
