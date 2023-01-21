#include "lists.h"
/**
 * insert_dnodeint_at_index - This function adds a new node
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: the position to add the new node
 * @n: data part of the node
 * Return: NULL or the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *ptr, *temp;

	if (*h == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (temp);
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*h = temp;
		return (temp);
	}
	else
	{
		ptr = *h;
		i = 1;
		while (i < idx)
		{
			if (ptr->next == NULL)
				return (NULL);
			ptr = ptr->next;
			i++;
		}
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (temp);
		temp->n = n;
		temp->next = ptr->next;
		temp->prev = ptr;
		ptr->next = temp;
		return (temp);
	}
}
