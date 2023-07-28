#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *g)
{
	int i;

	i = 0;
	while (g[i] != '\0')
	{
		if (g[i] >= 'a' && g[i] <= 'z')
			g[i] = g[i] - 32;
		i++;
	}
	return (g);
}
