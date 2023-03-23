#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * without 2 and 4
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
