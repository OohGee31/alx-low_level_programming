#include <stdio.h>
#include "main.h"

/**
 * main - Print number of arguments passed to the program
 * @argc: Number of argument
 * @argv: Array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore agrv*/
	printf("%d\n", argc - 1);
	return (0);
}
