#include "main.h"

/**
 * _isdigit - checks digit from (0 through 9)
 * if c is digit return 1 outherwise return 0
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

