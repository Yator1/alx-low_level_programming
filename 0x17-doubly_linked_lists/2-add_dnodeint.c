#include "lists.h"

/**
  * add_dnodeint - add node at the begining of a list
  * @head: pointer to head of the list
  * @n: data for the new node
  *
  * Return: pointer to the new node.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
