#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments received
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int o;

	for (o = 0; o < argc; o++)
	{
		printf("%s\n", argv[o]);
	}
	return (0);
}
