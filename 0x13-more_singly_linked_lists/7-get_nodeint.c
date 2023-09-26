#include "lists.h"
/**
* get_nodeint_at_index- returns the node at the specified node
* @head: the heade pointer
* @index: the index pointer
* Return: the pointer of the index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;

while (n < index)
{
n++;
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
