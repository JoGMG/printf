#include "main.h"

/**
 * _printf - receives the main string and all necessary parameters
 * to print a formated string.
 * @format: A string containing all the characters.
 * Return: A total count of the characters printed.
**/
int _printf(const char *format, ...)
{
	int printed_chars;
	sym_func f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	/* parser function called */
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
