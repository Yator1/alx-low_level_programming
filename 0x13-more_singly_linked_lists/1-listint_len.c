#include "lists.h"
/**
* listint_len - functions to return the number of elements
* @h: header pointer
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
unsigned int count = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
