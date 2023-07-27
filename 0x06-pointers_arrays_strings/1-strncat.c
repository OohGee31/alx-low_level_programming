#include "main.h"

/**
 * _strcat - concatenation of two strings by using,
 * at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	 dest[i] = src[j];
	 i++;
	 j++;
	}
	dest[i] = '\0';
	return (dest);
}

