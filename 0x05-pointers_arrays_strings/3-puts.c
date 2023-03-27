#include "main.h"
/**
 * _puts - print a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
