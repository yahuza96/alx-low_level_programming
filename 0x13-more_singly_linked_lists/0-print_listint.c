#include "lists.h"
/**
 * print_listint - prints list of integers
 * @h: head where the node starts counting
 * Return: pointer to size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
