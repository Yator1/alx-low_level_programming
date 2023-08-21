#include "main.h"
/**
 * rev_string- printing a string in reverse
 * @s: a pointer pointing to a string
 * Return: 0
 */

void rev_string(char *s)
{
	int length, strg, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		strg = 0;
	half = length / 2;
	while (half--)
	{
		temp = s[length - strg - 1];
		s[length - strg - 1] = s[strg];
		s[strg] = temp;
		strg++;
	}
}
