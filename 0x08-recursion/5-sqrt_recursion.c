#include"main.h"

/**
* _sqrt_recursion- returns the natural squareroot
* @n: number to be calculated
* Return: the result
*/
int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
return (actual_sqrt(n, 0));
}

/**
* actual_sqrt-recurses to find the natural squareroot
* @n: number to be square rooted
* @i: iterator
* Return: the results
*/

int actual_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt(n, i + 1));
}
