#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current <= head)
			break;
	}
	return (count);
}
