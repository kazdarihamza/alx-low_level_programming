#include "main.h"
/**
 * print_line - prints a straight line
 * @n: lentgh of the line
 */

void print_line(int n)
{
	int x = 0;

	if (n != 0)
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
