#include "lists.h"
/**
  * dlistint_len - a function that returns the number of
  * elements in a linked  list
  * @h: head pointer
  *
  * Return: return count elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		count += 1;
		current = current->next;
	}

	return (count);
}
