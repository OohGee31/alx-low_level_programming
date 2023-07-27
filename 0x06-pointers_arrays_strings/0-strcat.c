#include <stdio.h>
#include <string.h>

/**
 * _strcat - Two strings to concatenates
 * @dest: destination string
 * @src: source string
 * Return: 0 (success)
 */

char *_strcat(char *dest, char *src)

{
	int len 1, len 2, i;

	char s1[30] = "Hello";
	char s2[] = "World";

	len 1 = strlen(s1);
	len 2 = strlen(s2);
	for (i = 0; i <= len 2; i++)
	{
		s1[len 1 + i] = s2[i];
	}
	 printf("%s"; s1)
}
