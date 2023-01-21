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

	ptr = *h;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (temp);
	temp->n = n;
	if (*h == NULL && idx == 0)
	{
		temp->next = NULL;
		temp->prev = NULL;
		*h = temp;
	}
	if (ptr->next == NULL)
	{
		return (ptr);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (ptr->next == NULL)
			{
				ptr->next = temp;
				temp->prev = ptr;
				temp->next = NULL;
			}
			ptr = ptr->next;
		}
		temp->next = ptr->next;
		temp->next->prev = temp;
		temp->prev = ptr;
		ptr->next = temp;
	}
	return (temp);
}
