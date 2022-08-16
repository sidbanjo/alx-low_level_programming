#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to head of list
 *
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *temp = NULL;

	while ((**head).next)
	{
		next = (**head).next;
		(**head).next = temp;
		temp = *head;
		*head = next;
	}
	(**head).next = temp;
	return (*head);
}
