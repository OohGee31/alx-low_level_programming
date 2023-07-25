#include "main.h"

/**
 * _puts -  prints a string, followed by a new line
 * @str: points to string
 * Return: string and a new line
 */

void _puts(char *str)

{
	int d;

	for (d = 0; str[d] != '\n'; d++)
		_putchar(str[d]);
}
