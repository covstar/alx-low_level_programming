#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free's the memory at pointer d
 * @d: pointer to the struct to be freed
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
