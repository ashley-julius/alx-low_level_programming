#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in a struct including its length
 * @h: a pointer to a struct which you can't the value in the address
 * Return: only a positive number
 */


size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count_element = 0;

	if (h == NULL)
		printf("Linked list is empty");
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			count_element++;
		}
		else
		{
			printf("[%d] (nil)\n", ptr->len);
			ptr = ptr->next;
		}
	}
	return(count_element);
}

