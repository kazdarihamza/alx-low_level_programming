#include "main.h"
/**
 * _puts - print a string
 * @s: the string to be printed
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
