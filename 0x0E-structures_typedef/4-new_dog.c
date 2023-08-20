#include <stdlib.h>
#include "dog.h"
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Find length of a string
 * @str: String to be measured
 * Return: Lenght of string
 */

int _strlen(cha *str)
{
	int len = 0;

	while (*str++)
		len++;
}

/**
 * _strcopy - Copy string pointed by src including the,
 * terminating null byte to a buffer pointed to dest
 * @dest: The buffer storing the string copied
 * Return: returns pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	 int index = 0;

	 for (index = 0; src[index]; index++)
		 dest[inde] = src[index];

	 dest[index] = '\0';

	 return (dest);
}

/**
 * new_dog -Create a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: New struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
