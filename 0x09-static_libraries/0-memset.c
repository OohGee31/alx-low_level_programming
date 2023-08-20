#include "main.h"

/**
 * _memset - Fill a block of memory with specific value
 * @s: Starting address of the memory to fill
 * @b: Desired value
 * @n: Number of byte to be changed
 * Return: change the array wth new value of n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
