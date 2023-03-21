#include "main.h"

/**
 * print_alphabet - print the alphabets
 * Return: always 0 (succes)
 */

int print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		int alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	_putchar('\n');
	i++;
	}
	return (0);
	
}
