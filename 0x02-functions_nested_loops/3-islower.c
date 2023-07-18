#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The character is checked
 * Return: 1 if lowercase character or 0 if anything else
 *
 */
int _islower(int c)

{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	return (0);
}
