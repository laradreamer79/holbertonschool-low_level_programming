#include "main.h"

/**
 *_strcpy - copy element for src to des buffer
 *
 *@src: source string
 *@dest: destination buffer
 *Return: ppinter to des
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}

