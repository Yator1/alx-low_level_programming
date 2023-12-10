#include "lists.h"
/**
  * add_dnodeint_end - function to add node at end of list
  * @head: head pointer of the list
  * @n: last_node data
  *
  * Return: pointer to last_node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		dlistint_t *last_node = *head;
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return new_node;
}
