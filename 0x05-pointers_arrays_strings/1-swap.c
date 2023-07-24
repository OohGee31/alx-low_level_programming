#include "main.h"

/**
 * swap_int - inputs two integers and swap them
 * @a: swap and store address of b
 * @b: swap and store address of a
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)

{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
