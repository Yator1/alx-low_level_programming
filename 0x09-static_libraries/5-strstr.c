#include"main.h"
/**
* *_strstr -function searches a string for any of a set of bytes
* @haystack: the string to be searched
* @needle: the substring to be located
* Return: if substring is located, a pointer to the beginning
* of the located substing, otherwise NULL
*/

char *_strstr(char *haystack, char *needle)
{
int n;

if (*needle == 0)
return (haystack);

while (*haystack)
{
n = 0;

if (haystack[n] == needle[n])
{
do {
if (needle[n + 1] == '\0')
return (haystack);
n++;
} while (haystack[n] == needle[n]);
}
haystack++;
}
return ('\0');
}
