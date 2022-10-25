#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - This function adds a node at the end of the list
 * @head: pointer to a pointer to a struct
 * @str: character of strings
 * Return: the head pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = NULL;
	list_t *x = NULL;
	int len = 0;

	p = (list_t *)malloc(sizeof(list_t));
	if (p == NULL)
		return (p);
	p->str = strdup(str);
	while (str[len])
		len++;
	p->len = len;

	if (*head == NULL)
	{
		*head = p;
		p->next = NULL;
	}
	else
	{
		x = *head;
		while (x->next != NULL)
			x = x->next;
		x->next = p;
	}
	return (*head);
}
