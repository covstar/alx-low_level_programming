#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (current <= next)
			break;
		current = next;
	}
	*h = NULL;
	return (count);
}
