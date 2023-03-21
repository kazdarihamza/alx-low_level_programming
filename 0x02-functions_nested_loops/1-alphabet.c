#include "main.h"

/**
 * print_alphabet - print the alphabets
 * Return: always 0 (succes)
 */

void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
