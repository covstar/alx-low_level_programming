#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: ptr to the memory previously allocated
 * @old_size: number of bytes in malloced memory
 * @new_size: number of bytes new size needs
 * Return: pointer to new memory space or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *old, *new_temp;
	/* if no new space needed */
	if (new_size == old_size)
		return (ptr);
	/* if the first malloc block was unitialised? */
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	/* if the first malloc was unitialised and no new space needed */
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	old = ptr;
	new_temp = new;

	while (old_size > 0)
	{
		*new_temp = *old;
		new_temp++;
		old++;
		old_size--;
	}
	free(ptr);
	return (new);
}
