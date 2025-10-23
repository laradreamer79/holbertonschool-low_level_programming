#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Description: If the number of characters is odd,
 * the function prints the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

