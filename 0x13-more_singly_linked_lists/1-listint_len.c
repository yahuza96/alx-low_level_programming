#include "lists.h"
/**
 * listint_len - length of lists
 * @h: head pointer
 * Return: return a pointer
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
