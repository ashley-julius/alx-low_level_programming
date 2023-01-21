#include "lists.h"
/**
 * insert_dnodeint_at_index - This function adds a new node
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: the position to add the new node
 * @n: data part of the node
 * Return: NULL or the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	size_t i = 0;

	if (!(*h) && !idx)
		return (*h = new_node(n));
	else if (!idx)
		return (*h = add_dnodeint(h, n));
	node = *h;
	if (node->prev)
		while (node->prev)
			node = node->prev;
	else if (!node->next)
		while (node->prev)
			node = node->prev;

	while (++i < idx && node->next)
	{
		node = node->next;
	}
	if (i < idx)
		return (NULL);
	else if (node)
	{
		new = new_node(n);
		if (!new)
			return (NULL);
		if (node->next)
			node->next->prev = new;
		new->prev = node;
		new->next = node->next;
		node->next = new;
	}
	return (new);
}

/**
 * new_node - creates a new node
 * @n: value to set the new node to.
 *
 * Return: pointer to a new node.
 */
dlistint_t *new_node(int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = node->prev = NULL;

	return (node);
}
