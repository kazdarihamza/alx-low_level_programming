#include "main.h"
/**
 *print_last_digit - function that gives the last digit of a number.
 *@x: is a character from ascii
 *Return: always 0 (sucess)
 */

void jack_bauer(void)
{
	int min = 0;
	int hours = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
