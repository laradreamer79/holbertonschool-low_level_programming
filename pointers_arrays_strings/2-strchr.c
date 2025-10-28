#include "main.h"
#include <stddef.h>

/**
 * _strchr - return pointer to first occurance of c in string s or NULL
 *
 * @s: the string that the pointer will go through
 * @c: the charchter that the pointer will return to
 *
 * Return: pointer to first charecter c
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
		return (s);
	s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

