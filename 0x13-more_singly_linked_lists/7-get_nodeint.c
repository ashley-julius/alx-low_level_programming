#include "lists.h"
/**
 * get_nodeint_at_index - This function returns the nth node of the list
 * @head: pointer to a struct
 * @index: unsigned int
 * Return: the node at that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i;

	ptr = head;
	if (ptr == NULL)
		return (ptr);
	for (i = 0; ptr != NULL; i++)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
