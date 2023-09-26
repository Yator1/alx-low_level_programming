#include "lists.h"
/**
* add_nodeint_end - addition of a node at the end
* @head: header pointer
* @n: new integer
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
/* creating a new temp node*/
listint_t *newNode;
listint_t *temp = *head;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
return (*head);
}
