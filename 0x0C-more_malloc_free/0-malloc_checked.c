#include <stdlib.h>

/**
 * malloc_checked - creates memory space with malloc, checks malloc return
 * @b: exit value to be returned
 * Return: pointer to new memory space or exit value
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
