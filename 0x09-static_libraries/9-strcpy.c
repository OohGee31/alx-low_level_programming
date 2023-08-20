#include "main.h"

/**
 * char *_strcpy - Function to copy the string pointed by src
 * @dest: Destination
 * @src: Source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int e = 0;

	while (*(src + 1) != '\0')
	{
		t++;
	}
	for (; e < 1; e++)
	{
		dest[e] = src[e];
	}
	dest[t] = '\0';
	return (dest);
}
