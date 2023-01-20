#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the begining
 * @head: pointer to the first node or head pointer
 * @n: ordinary int (data part of node)
 * Return: head pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declares two pointers */
	dlistint_t *ptr, *temp;

	/* creates new node and check for error */
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (ptr);
	/* set the data and links part */
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	/* check if list is empty */
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	/* if list has something */
	else
	{
		temp = *head;
		ptr->next = temp;
		temp->prev = ptr;
		*head = ptr;
		return (*head);
	}
}

