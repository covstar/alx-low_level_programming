#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise a variable of type struct dog
 * @d: variable name
 * @name: member name
 * @age: member age
 * @owner: member owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
