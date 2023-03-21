#include "main.h"

/**
 * print_alphabet - print the alphabets
 * Return: always 0 (succes)
 */

int print_alphabet(void)
{
	int alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	_putchar('\n');
	return (0);
}
