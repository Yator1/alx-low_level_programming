#include "main.h"
/**
* leet - functions that encode a string into 1337.
* a n A - 4, e n E - 3, o n O - 0, t n T - 7, l n L - 1
* @s: string pointer
* Return: pointer to s
*/
char *leet(char *s)
{
int string_length, leet_count;
char leet_letters[] = "aeotlAEOTL";
char leet_num[] = "4307143071";

string_length = 0;
while (s[string_length] != '\0')
{
leet_count = 0;
while (leet_count < 10)
{
if (leet_letters[leet_count] == s[string_length])
{
s[string_length] = leet_num[leet_count];
}
leet_count++;
}
string_length++;
}
return (s);
}
