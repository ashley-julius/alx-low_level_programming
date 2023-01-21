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

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (temp);
	if (*h == NULL)
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*h = temp;
		return (temp);
	}
	else
	{
		ptr = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (ptr->next == NULL)
			{
				temp->n = n;
				ptr->next = temp;
				temp->prev = ptr;
				temp->next = NULL;
			}
			ptr = ptr->next;
		}
		temp->n = n;
		temp->next = ptr->next;
		temp->next->prev = temp;
		temp->prev = ptr;
		ptr->next = temp;
		return (temp);
	}
}
