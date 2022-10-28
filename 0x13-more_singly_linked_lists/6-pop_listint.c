/* This file pop of the first node and returns its data */
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - This function  deletes the last node and returns the data
 * @head: pointer to a pointer to a struct
 *
 * Return: an int
 */
int pop_listint(listint_t **head)
{
	int k;
	listint_t *ptr = NULL;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	k = ptr->n;
	free(ptr);
	ptr = NULL;
	return (k);
}
