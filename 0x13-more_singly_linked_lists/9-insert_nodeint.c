/* This function adds a new node at a given location */
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - This function adds a new node at the given index
 * @head: head pointer to the first node
 * @idx: unsigned int
 * @n: ordinary int
 * Return: address of the newly selected node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *tmp = NULL;
	listint_t *pto = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (*head);
	}

	if (idx == 0)
	{
		pto = (listint_t *)malloc(sizeof(listint_t));
		if (pto == NULL)
			return (pto);
		pto->n = n;
		tmp = *head;
		pto->next = tmp;
		*head = pto;
		return (pto);
	}
	else
	{
		ptr = *head;
		pto = (listint_t *)malloc(sizeof(listint_t));
		if (pto == NULL)
			return (pto);
		pto->n = n;
		for (; i < idx && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr->next == NULL)
			return (NULL);
		tmp = ptr->next;
		ptr->next = pto;
		pto->next = tmp;
	}
	return (pto);
}



