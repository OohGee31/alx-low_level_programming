#include "main.h"

/**
 * _strcat - Two strings to concatenates
 * @dest: destination string
 * @src: source string
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)

{
        int d  = 0;
        int g  = 0;

        while (dest[d] != '\0')
        {
                d++;
        }
        while (src[g] != '\0')
        {
                dest[d] = src[g];
                d++;
                g++;
        }
        dest[d] = '\0';
        return (dest);
}
