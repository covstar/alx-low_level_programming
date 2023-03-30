#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: pointer to the start of the list
 * Return: number of elements as size_t
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	h = h->next;

	return (1 + list_len(h));
}
