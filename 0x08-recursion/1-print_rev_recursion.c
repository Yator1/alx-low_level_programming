#include "main.h"
/**
* _print_rev_recursion- functions reversing the string
* @s: the string to be reversed
* Return: void
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
