#include "main.h"
/**
* _strcmp- a functions that compares two strings
* @s1: first string pointer
* @s2: second string pointer
* Return: value < 0 if s1 is < s2 and value > 0 if s1 > s2
* value == 0 if s1 = s2
*/

int _strcmp(char *s1, char *s2)
{
int n, results,

n = 0;
while (s1[n] == s2[n] && s1[n] != '\0')
{
n++;
}
results = s1[n] - s2[n];
return (value);
}
