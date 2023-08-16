#include "function_pointers.h"
#include <stdtio.h>

/**
 * _prit_name - Print name using pointer to fuction
 * @name: String
 * @f: pointer to function
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
