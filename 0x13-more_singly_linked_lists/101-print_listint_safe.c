#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: head of list
 *
 * Return: number of nodes in liat
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, x;
	listint_t *temp[] = {NULL};

	i = 0;
	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		temp[i] = malloc(sizeof(head));
		temp[i]->n = head->n;
		temp[i]->next = head->next;
		head = head->next;
		for (x = i; x >= 0; x--)
		{
			if ((head->n == temp[x]->n) && (head->next == temp[x]->next))
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (i + 1);
			}
		}
		i++;
	}
	return (i);
}
