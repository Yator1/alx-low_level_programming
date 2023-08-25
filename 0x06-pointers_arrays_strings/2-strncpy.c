#include "main.h"
/**
* _strncpy - functions that copies a string.
* @dest: destination string pointer
* @src: source string pointer
* @n: number of bytes to be used
* Return: destination pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
int bytesCount;

for (bytesCount = 0; bytesCount < n && src[bytesCount] != '\0'; bytesCount++)
{
dest[bytesCount] = src[bytesCount];
}
for (; bytesCount < n; bytesCount++)
{
dest[bytesCount] = '\0';
}
return (dest);
}
