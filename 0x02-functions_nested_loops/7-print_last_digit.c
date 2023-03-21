#include "main.h"
/**
 *print_last_digit - function that gives the last digit of a number.
 *@x: is a character from ascii
 *Return: always 0 (sucess)
 */
int print_last_digit(int x)
{
	if (x > 0)
	{
		_putchar(x % 10 + '0');
		return (x % 10);
	}
	else
	{
		x = x * -1;
		_putchar(x % 10 + '0');
		return (x % 10);
	}
}
