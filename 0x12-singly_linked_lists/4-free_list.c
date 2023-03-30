#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list list_t list
 * @head: pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *release = head;

	if (release == NULL)
		return;

	while (release->next != NULL)
	{
		free(release->str);
		free(release);
		release = release->next;
	}
	free(release->str);
	free(release);
}
