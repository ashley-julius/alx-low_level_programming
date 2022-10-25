#include "lists.h"
#include <stdlib.h>
/**
 * free_list - This function frees the memory allocated to a node
 * @head: poiner to a struct
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		head = head->next;
		ptr = head;
	}
}
