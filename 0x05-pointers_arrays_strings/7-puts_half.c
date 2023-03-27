#include "main.h"
/**
 * _strlen - prints string lentgh
 * @str: string to modify
 * Return: retrunf the lentgh of string
 */

int _strlen(char *str);

/**
 * puts_half - prints half string
 * @str: string to modify
 */

void puts_half(char *str)
{
	int n;

	for (n = _strlen(str) / 2; n < _strlen(str); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
/**
 * _strlen - prints string lentgh
 * @str: string to modify
 * Return: retrunf the lentgh of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

