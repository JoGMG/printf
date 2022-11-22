#include "main.h"

/**
 * print_char - prints character.
 * @list: list of arguments.
 * Return: the amount of characters and return 1 (success) always.
**/
int print_char(va_list list)
{
	write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints string.
 * @list: list of arguments.
 * Return: the amount of characters.
**/
int print_string(va_list list)
{
	int i;
	char *str;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write_char(str[i]);
	}
	return (i);
}

/**
 * print_percent - prints percent symbol.
 * @list: list of arguments.
 * Return: the amount of characters.
**/
int print_percent(__attribute__((unused))va_list list)
{
	write_char('%');
	return (1);
}
