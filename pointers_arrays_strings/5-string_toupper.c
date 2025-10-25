#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to modify
 *
 * Description: Iterates through each character in the string,
 * converts lowercase letters (a–z) to uppercase (A–Z)
 * by subtracting 32 from their ASCII value.
 *
 * Return: pointer to the resulting string s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

