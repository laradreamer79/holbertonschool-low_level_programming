#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Description: Replaces letters a, e, o, t, and l
 * with 4, 3, 0, 7, and 1 respectively.
 *
 * Return: pointer to the resulting string s
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}

