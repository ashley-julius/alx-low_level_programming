#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint_t linked list
 * @idx: position where new node is to be added
 * @n: new node data
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *temp = NULL;
	unsigned int k = 0;

	if (*head == NULL)
	{
		return (ptr);
	}

	else if (idx == 0)
	{
		ptr = malloc(sizeof(listint_t));
		ptr->data = n;
		ptr->next = NULL;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	else
	{
		ptr = malloc(sizeof(listint_t));
		ptr->data = n;
		ptr->next = NULL;
		temp = *head;
		k = idx - 1;
		while (k > 0)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				ptr = temp;
				return (ptr);
			}
			k--;
		}
		ptr->next = temp->next;
		temp->next = ptr;
		return (ptr);
	}
}

