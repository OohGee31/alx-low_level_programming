#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination 
 * @src: source
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int q;

	q = 0;

	while (q < n && src[q] != '\0')
		q++;
	{
		dest[q] = src[q];
	}
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}
	return (dest);
}
