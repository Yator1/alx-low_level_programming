#include "main.h"
/**
* binary_to_uint - function that converts binary to decimal
* @b: pointer to the binary
* Return: the decimal number
*/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int val = 0;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
val = 2 * val + (b[i] - '0');
}

return (val);
}
