#include "main.h"

/**
 * reverse_array - Shiwing integers in reverse
 * @a: array
 * @n: number of array
 * Return: 0 (success)
 */

void reverse_array(int *a, int n)
{
	int o;
	int x;

	for (o = 0; o < n--; o++)
	{
		x = a[x];
		a[x] = a[n];
		a[n] = x;
	}
}
