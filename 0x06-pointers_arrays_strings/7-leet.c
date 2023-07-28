#include "main.h"

/**
 * leet - To encode 1337speak into it
 * @e: input
 * Return: n
 */

char *leet(char *e)

{
	int c;
	int t;

	char s1[30] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; e[c] != '\0'; c++)
	{
		for (t = 0; t < 10; t++)
		{
			if (e[c] == s1[t])
			{
				e[c] = s2[t];
			}
		}
	}
	return (e);
}
