#include"main.h"
/**
 * print_alphabet_x10-printing 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int j;

	j = 0;

	while (j < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
		ch++;
		}
		_putchar('\n');
		j++;
	}
}
