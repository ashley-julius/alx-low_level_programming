/* This program adds a new node at the end of the list */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - The function creates a new node and add the end
 * @head: pointer to a pointer to a struct
 * @n: constant int
 * Return: an address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = NULL;
	listint_t *tmp = NULL;

	if (*head == NULL)
	{

		p = (listint_t *)malloc(sizeof(listint_t));
		if (p == NULL)
			return (p);
		p->n = n;
		p->next = NULL;
		*head = p;
	}
	else
	{
		p = *head;
		tmp = (listint_t *)malloc(sizeof(listint_t));
		if (tmp == NULL)
			return (tmp);
		tmp->n = n;
		tmp->next = NULL;

		/* Loop until the last node */
		while (p->next != NULL)
			p = p->next;
		p->next = tmp;
	}
	return (*head);
}
