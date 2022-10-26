#include <stdio.h>
#include "lists.h"
/**
 * listint_len - This function prints all the elements in a list
 * @h: ponter to a struct whose value never changes
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = NULL;
	size_t count_nodes = 0;

	p = h;
	while (p != NULL)
	{
		if (p->n)
			count_nodes++;
		p = p->next;
	}
	return (count_nodes);
}
