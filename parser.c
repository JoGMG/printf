#include "main.h"

/**
 * parser - receives the main string and all necessary parameters
 * to print a formated string.
 * @format: a string containing all desired characters.
 * @f_list: a list containing all possible functions.
 * @arg_list: a list containing all arguments passed to the program.
 * Return: a total count of the characters printed.
**/
int parser(const char *format, sym_func f_list[], va_list arg_list)
{
	int i, j, real_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++) /* iterates through the main string */
	{
		if (format[i] == '%') /* checks for the format soecifier */
		{
			for (j = 0; f_list[j].sym != NULL; j++) /* iterates through struct */
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					real_val = f_list[j].f(arg_list);
					if (real_val == -1)
						return (-1);
					printed_chars += real_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					write_char(format[i]);
					write_char(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /* Updating i to skip format symbols */
		}
		else
		{
			write_char(format[i]); /* write it as it is*/
			printed_chars++;
		}
	}
	return (printed_chars);
}
