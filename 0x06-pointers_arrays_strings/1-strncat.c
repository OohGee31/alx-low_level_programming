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
	int c = 0;
	int g = 0;


	while (dest[c] != '\0')
	{
		c++;
	}
	while (g < n && src[g] != '\0')
	{
		dest[c] = src[g];
		c++;
		g++;
	}
	dest[c] = '\0';
	return (dest);
}

