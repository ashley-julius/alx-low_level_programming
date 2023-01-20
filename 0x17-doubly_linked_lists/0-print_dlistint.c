#include "lists.h"

/**
 * print_dlistint - This function prints all doubly linked list data
 * @h: pointer to the first node in the list
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (0);
}
