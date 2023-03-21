#include "main.h"
/**
 *print_sign - function that prints the value of a character.
 *@n: is a character from ascii
 *Return: always 0 (sucess)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
