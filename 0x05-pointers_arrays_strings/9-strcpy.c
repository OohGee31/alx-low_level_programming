#include "main.h"

/**
 * _strcpy - Copy string pointed by src
 * @dest: char atring
 * @src: char string
 * Description: copy string pointed by src to the buffer pointed by dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int g = 0;

	while (src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	dest[g] = '\0';
	return (dest);
}
