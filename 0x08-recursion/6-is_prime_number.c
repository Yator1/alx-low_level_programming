#include"main.h"
/**
* prime_calc- function that calculates if its a prime
* @a: input
* @b: divisor
* Return: int
*/

int prime_calc(int a, int b)
{
if (a <= 1 || (a != b && a % b == 0))
{
return (0);
}
else if (a == b)
{
return (1);
}
return (prime_calc(a, b + 1));
}

/**
* is_prime_number- function to detect prime
* @n: number
* Return: 0 or 1
*/

int is_prime_number(int n)
{
return (prime_calc(n, 2));
}
