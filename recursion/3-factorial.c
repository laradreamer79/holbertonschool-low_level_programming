#include "main.h"

/**
 * factorial - return factorial of giving number
 * @n: the number to found its facrotial
 *
 * Return: when 0 return 1,when less than 0 return -1,otherwise count factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

