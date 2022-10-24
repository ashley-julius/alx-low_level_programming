#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in a struct including its length
 * @h: a pointer to a struct which you can't the value in the address
 * Return: the number of elements
 */


size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count_element = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		count_element++;
		ptr = ptr->next;
	}
	return (count_element);
}

