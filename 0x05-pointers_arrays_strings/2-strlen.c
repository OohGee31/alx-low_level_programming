#include "main.h"

/**
 * _strlen - Check nfor string length
 * @s: String required to be checked
 * Return: Length of string
 */


int _strlen(char *s)

{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
