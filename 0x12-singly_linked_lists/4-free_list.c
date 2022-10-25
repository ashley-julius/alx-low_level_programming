#include "lists.h"
#include <stdlib.h>
/**
 * free_list - This function frees the memory allocated to a node
 * @head: poiner to a struct
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->str)
		free(head->str);
	free(head->next);
	free(head);
}
