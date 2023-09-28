#include "main.h"
/**
* get_endianness - checks if a machine is little or big endian
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int i = 1;
int lil_big;
lil_big = (int) (((char *)&i)[0]);

return (lil_big);
}
