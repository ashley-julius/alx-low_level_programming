#include "lists.h"

/**
 * dlistint_len - This function counts the number of nodes in the list
 * @h: pointer to the first node in the list
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
