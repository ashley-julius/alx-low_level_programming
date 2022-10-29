/* This program sums all the data in a list */
#include "lists.h"
/**
 * sum_listint - This function sums all the data in a singly linked list
 *@head: pointer to the first node
 *
 *Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = head;
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
