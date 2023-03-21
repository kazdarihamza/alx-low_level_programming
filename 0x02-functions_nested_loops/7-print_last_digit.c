#include <limits.h>
#include "main.h"
/**
 *print_last_digit - function that gives the last digit of a number.
 *@x: is a character from ascii
 *Return: always 0 (sucess)
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x >= 0)
	{
		_putchar(x % 10 + '0');
		return (x % 10);
	}
	else if (x < 0)
	{
		x = x * -1;
		_putchar(x % 10 + '0');
		return (x % 10);
	}
	else if (x == INT_MIN)
	{
		last_digit = 8;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	return (0);
}
