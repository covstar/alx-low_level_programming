#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		new_n = (size_t)tmp_n;
		if (new_n >= (size_t)tmp_n->next && tmp_n->next != NULL)
		{
			l_n = tmp_n->next;
			counter++;
			printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
			printf("-> [%p] %d\n", (void *)l_n, l_n->n);
			break;
		}
		counter++;
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		tmp_n = tmp_n->next;
	}
	if (!l_n)
		counter++;
	return (counter);
}
