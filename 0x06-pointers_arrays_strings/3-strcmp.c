#include "main.h"

/**
 * _strcmp - Strings to compare
 * @s1: input value
 * @s2: input value
 * Return: s1[] - s2[]
 */

int _strcmp(char *s1, char *s2)
{
	int l;

	l = 0;
	while (s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);
}
