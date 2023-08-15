#include"main.h"
/**
 * print_alphabet-printing all alphabets in lowercases
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
