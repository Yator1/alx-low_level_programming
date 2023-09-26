#include "lists.h"
/**
* add_nodeint - function to add a node
* @head: head pointer to be added
* @n: new int data
* Return: the new header
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
/* creating a new node */
listint_t *newNode;

if (head == NULL)
return (NULL);

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

else
newNode->next = *head;
newNode->n = n;
*head = newNode;
return (*head);
}
