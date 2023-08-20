#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to print
 * Return: 1 for success
 * For error return -1 and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
