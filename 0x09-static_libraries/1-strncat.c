#include "main.h"

/**
 * _strncat - concatenates two strings using at most n byte
 * from src
 * @dest: Destination value
 * @src: Source value
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int f;
	int i;

	f = 0;
	while (dest[f] != '\0')
	{
		f++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[f] = src[i];
		f++;
		i++;
	}
	dest[f] = '\0';
	return (dest);
}
