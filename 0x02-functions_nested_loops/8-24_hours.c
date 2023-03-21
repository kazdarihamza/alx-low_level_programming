#include "main.h"
/**
 *jack_bauer - function that generates minutes of jack bauer.
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
