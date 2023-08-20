#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0 (sucess)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				n++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
