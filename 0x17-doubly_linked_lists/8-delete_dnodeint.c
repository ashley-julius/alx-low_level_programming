#include "lists.h"

/**
 * delete_dnodeint_at_index - This function delete a node at the index
 * @head: pointer to the first node in the list
 * @index: position of the node to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = *head;
	i = 0;
	if (ptr == NULL)
		return (-1);
	while (ptr != NULL)
	{
		if (index == 0)
		{
			*head = ptr->next;
			ptr->next->prev = NULL;
			free(ptr);
			return (1);
		}
		if (i > 0 && i == index)
		{
			if (ptr->next == NULL)
			{
				ptr->prev->next = NULL;
			}
			else
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			}
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
