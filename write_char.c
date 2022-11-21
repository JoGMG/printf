#include "main.h"

/**
 * write_char - writes the character c to stdout.
 * @c: The character to print.
 * Return: 1 (success).
 * Error: -1 is returned and errno is set appropriately.
**/
int write_char(char c)
{
	return (write(1, &c, 1));
}
