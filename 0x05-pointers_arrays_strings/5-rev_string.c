#include "main.h"

/**
 * rev_string - Print string in reverse
 * @s: Pointer points to the string
 * Return: 0 (success)
 */

void rev_string(char *s)

{
	int length, d, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;


	d = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - d - 1];
		s[length - d - 1] = s[d];
		s[d] = temp;
		d++;
	}
}
