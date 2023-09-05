#include"main.h"
/**
* _strncat- function that concatenates two strings.
* @dest: destination string pointer
* @src: source string pointer
* @n: number of bytes to be concatenated.
* Return: destination string pointer
*/
char *_strncat(char *dest, char *src, int n)
{
int len, z;

len = 0;
while (dest[len] != '\0')
{
len++;
}
for (z = 0; z < n && src[z] != '\0'; z++, len++)
{
dest[len] = src[z];
}
dest[len] = '\0';
return (dest);
}
