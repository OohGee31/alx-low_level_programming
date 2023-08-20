#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts string to an integer
 * @s: String to convert
 * Return: int converted
 */

int _atoi(char *s)
{
	int q, w, e, len, r, digit;

	q = 0;
	w = 0;
	e = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && r == 0)
	{
		if (s[q] == '-')
			++w;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (w % 2)
				digit = -digit;
			e = e * 10 + digit;
			r = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			r = 0;
		}
		q++;
	}
	if (r == 0)
		return (0);
	return (e);
}

/**
 * main - Multiply two numbers
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 0 for success or 1 for error
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
