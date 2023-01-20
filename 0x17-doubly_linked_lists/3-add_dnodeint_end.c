#include "lists.h"

/**
 * add_dnodeint_end - This function adds a new node at the end.
 * @head: pointer to the first node in the list
 * @n: data part of the node to be added
 * Return: the address of the new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* declare two pointers */
	dlistint_t *ptr, *temp;

	/* create the node and check for any error */
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (ptr);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	/* check if the list is empty */
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		ptr->prev = temp;
		return (*head);
	}
}
