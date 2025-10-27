#include "main.h"

/**
 * char *_memset - fills n byte of memory area s with constant byte b
 *
 * @s: memory area
 * @b:constant byte
 * @n:number of bytes to fill
 *
 * Return: pointer to memeory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (start);
}

