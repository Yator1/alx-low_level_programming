#include "main.h"
/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: the string to be searched
* @accept: the set of bytes to be searched for
* Return: if set is matched, a pointer to the matched bytes, otherwise NULL.
*/
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
