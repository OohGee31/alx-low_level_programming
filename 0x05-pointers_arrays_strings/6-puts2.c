#include "main.h"

/**
 * puts2 - print character of a string
 * @str: string in reference
 * Return: 0 (success)
 */

void puts2(char *str)

{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(s[x]);
		}
		x++;
	}
	_putchar('\n');
}
