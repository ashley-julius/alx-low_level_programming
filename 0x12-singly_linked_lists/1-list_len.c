#include "lists.h"
/**
 * list_len - count the elements in a node
 * @h: pointer to a struct whose value you can't change
 * Return: the number of element
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t len = 0;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
