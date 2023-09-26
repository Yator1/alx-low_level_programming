#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *rev = NULL;
listint_t *next = NULL;

if (head == NULL || *head == NULL)
return (NULL);

while (*head)
{
next = (*head)->next;
(*head)->next = rev;
rev = *head;
*head = next;
}

*head = rev;

return (*head);
}
