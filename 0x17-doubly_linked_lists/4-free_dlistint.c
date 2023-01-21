#include "lists.h"

/**
 * free_dlistint - This function frees all the nodes in the list
 * @head: the pointer to the first node in the list
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* traverse the list */
	while (head != NULL)
	{
		temp = head;
		/* check if it's the last node */
		if (temp->next == NULL)
			temp->prev = NULL;
		head = head->next;
		/* free each node in the list */
		free(temp);
	}
}
