#include "main.h"


/**
 * _strlen - return the length of the string
 *@s: pointer to the string
 *
 * Return: the length of the string
 */

	int _strlen(char *s)

{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

