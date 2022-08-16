#include "lists.h"

/**
 * listint_len - Returns number of elements in a list.
 * @h: head of the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
