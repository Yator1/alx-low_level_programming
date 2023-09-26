#include"lists.h"
/**
* print_listint - function that prints all the elements of a listint_t list
* @h: header pointing to the list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
unsigned int count;

if (h == NULL)
return (0);

for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
/* increament the head to the next node */
h = h->next;
}
return (count);
}
