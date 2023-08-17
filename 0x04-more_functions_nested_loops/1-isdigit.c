#include"main.h"
/**
 * _isdigit-checks for a digit 0 thru 9
 * @c: int to be checked
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
