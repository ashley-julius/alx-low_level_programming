#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t linked list
 * @idx: position where new node is to be added
 * @n: new node data
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *tmp = NULL;
	unsigned int k = 0;

	ptr = *head;
	if (ptr == NULL)
		return (ptr);
	tmp = (listint_t *)malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (tmp);
	if (idx == 0)
	{
		tmp->n = n;
		tmp->next = ptr;
		*head = tmp;
		return (tmp);
	}
	else
	{
		for (; k < idx; k++)
		{
			if (ptr->next == NULL)
				return (NULL);
			if (k == 4)
			{
				tmp->n = n;
				tmp->next = ptr;
				ptr->next = tmp;
			}
		}
		return (tmp);
	}

}
