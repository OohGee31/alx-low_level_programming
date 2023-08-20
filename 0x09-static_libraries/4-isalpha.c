#include "main.h"

/**
 * _isalpha - Looks for alphabetic character
 * @c: Character to check
 * Return: 1 if c is an alphabet, 0 otherwise
 */


int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
