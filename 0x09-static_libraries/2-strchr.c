#include"main.h"
/**
* *_strchr- function that locates a character in a string
* @s: pointer to the string
* @c: the character to be located.
* Return: if c is found, a pointer to the first occurence
* if c is not found, NULL
*/

char *_strchr(char *s, char c)
{
int n;

for (n = 0; s[n] >= '\0'; n++)
{
if (s[n] == c)
return (s + n);
}
return ('\0');
}
