#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer to struct dog to be initialized
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

voif init_dog(struct dog *d, char *name, float ge, char *owmer)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
