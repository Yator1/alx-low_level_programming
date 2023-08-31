#include "main.h"
/**
* strlen_recursion- function to get the string length
* @s: the string
* Return: the length
*/
int strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + str_recursion(s + 1));
}

/**
* comp_string - compares the character of the string
* @s: string
* @l: small iterator
* @r: largest iterator
* Return: int
*/

int comp_string(char *s, int r, int l)
{
if ((*s + l) == (*s + r))
{
if (l == r || l == r + 1)
return (1);
return (0 + comp_string(s, l + 1, r - 1));
}
return (0);
}
/**
* is_palindrome- detects a palidrome string
* @s: the string
* Return: 1 if palidrome, 0 if not
*/

int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (comp_string(s, 0, str_recursion(s - 1)));
}
