#include"main.h"
/**
 * _isalpha-checks for alphabetic charracters
 * @c: the character to be checked
 * Return: 1 if c is the character, otherwise return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
