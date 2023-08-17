#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints everything
 * @format: List of types of arguments to be passed,
 * to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int d = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[d])
		{
			switch (format[d])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					d++;
					continue;
			}
			sep = ", ";
			d++;
		}
	}
	printf("\n");
	va_end(list);
}
