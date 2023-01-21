#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node
 * @head: pointer to the first node of the list
 * @index: the node number that should be returned
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	while (ptr != NULL)
	{
		/* if the node is found return it */
		if (count == index)
			return (ptr);
		ptr = ptr->next;
		count++;
	}
	/* return null if node not found */
	return (NULL);
}
