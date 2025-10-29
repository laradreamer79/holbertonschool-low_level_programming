#include <unistd.h>

/**
 * _putchar - print charecter to stdout
 *
 * @c: the charecter to print
 * Return: 1 in success, -1 in fails
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

