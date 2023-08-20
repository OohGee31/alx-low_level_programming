#include <stdio.h>
#include "main.h"

/**
 * _putchar - Write the character c to stdout
 * @c: Character
 * Return: 1 for success, -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
