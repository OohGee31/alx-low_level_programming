#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: input value
 * @src: source value
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int o;
	int w;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[o] = src[w];
		o++;
		w++;
	}
	dest[o] = '\0';
	return (dest);
}
