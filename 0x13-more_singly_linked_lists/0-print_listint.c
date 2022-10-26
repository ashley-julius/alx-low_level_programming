#include <stdio.h>
#include "lists.h"
/**
 * print_listint - This function prints all the elements in a list
 * @h: ponter to a struct whose value never changes
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = NULL;
	size_t count_nodes = 0;

	p = h;
	if (p == NULL)
		return (1);
	while (p != NULL)
	{
		printf("%d\n", p->n);
		count_nodes++;
		p = p->next;
	}
	return (count_nodes);
}
