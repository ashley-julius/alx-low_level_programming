#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - This function adds a new node to the list
 * @head: pointer to a pointer to a struct
 * @n: an int whose value can't be changed
 * Return: address to the new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (ptr);
	if (*head != NULL)
		ptr->next = *head;
	else
		ptr->next = NULL;
	ptr->n = n;
	*head = ptr;
	return (*head);
}

