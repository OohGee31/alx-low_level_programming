#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination of memory
 * @src: Source memory to copy
 * @n: number of bytes
 * Return: copied memory with changed n byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int y = n;

	for (; f < y; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}
