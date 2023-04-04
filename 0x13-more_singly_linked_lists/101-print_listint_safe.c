#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;  /* Initialize the node count to zero */
    const listint_t *temp = head;  /* Create a temporary pointer to the head */

    while (temp != NULL)
    {
        printf("[%p] %d\n", (void *)temp, temp->n);  /* Print the node address and value */
        count++;  /* Increment the node count */

        /* Check if the next node has already been printed */
        if (temp <= temp->next)
        {
            printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
            printf("-> [%p] %d\n", (void *)temp->next->next, temp->next->next->n);
            exit(98);  /* Exit the program with status 98 */
        }

        temp = temp->next;  /* Move to the next node */
    }

    return (count);  /* Return the node count */
}
