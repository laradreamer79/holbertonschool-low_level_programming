#include "main.h"

/**
 **_memcpy - copy n byte of src to dest
 *
 * @n: the number of bytes to copy to dest
 * @src: the bytes to copy
 * @dest: the memory to copy to
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *start = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
	dest++;
	src++;
	}
	return (start);
}
