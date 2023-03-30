#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string
 * @s: the string to be examined
 * Return: the number of chars in the string as an int)
 */
int _strlen(char *s)
{
	if (*s == '\0' || s == NULL)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * add_node - adds a node to the front a list
 * @head: pointer to pointer for start of list
 * @str: pointer to string for inclusion
 * Return: pointer to new node or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->len = _strlen(new->str);
	new->next = *head;

	*head = new;

	return (new);
}
