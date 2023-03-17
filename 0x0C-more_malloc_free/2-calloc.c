#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc and initiates to 0
 * @nmemb: nmber of elements in the array
 * @size: size in bytes of element
 * Return: a pointer to the new memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *hold;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);

	hold = a;
	count = 0;
	while (count < nmemb * size)
	{
		*hold = '\0';
		hold++;
		count++;
	}
	return (a);
}
