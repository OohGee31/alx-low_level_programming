#include "main.h"

/**
 * puts_half - print half of a string, then a new line
 * @str: input string
 * Return: 0 (success)
 */

void puts_half(char *str)

{
	int i, d, add = 0;

	for (i = 0; str[i] != '\0'; i++)
		add++;
	d = (add - 1) / 2;
	for (i = d + 1; str[i] != '\0'; i++)
		_putchar('\n');
}
