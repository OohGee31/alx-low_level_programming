#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be used
 * Return: 0 (success)
 */

void print_rev(char *s)

{
	int go = 0;

	while (s[go])
		go++;
	while (go--)
		_putchar(s[go]);
	_putchar('\n');
}
