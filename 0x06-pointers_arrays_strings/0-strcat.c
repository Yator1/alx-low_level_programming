#include"main.h"
/**
* _strcat - function that concatenates two strings
* @dest: pointer pointing string destination
* @src: pinter pointing source
* Return: destination character
*/

char *_strcat(char *dest, char *src)
{
int length_of_string, z;

while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (z = 0; src[z] = '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[z];
}
dest[length_of_string] = '\0';
return (dest);
}
