#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to head node
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	return (prev);
}
