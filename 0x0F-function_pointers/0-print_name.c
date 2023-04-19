#include "function_pointers.h"
/**
 * print_name - prints a name
 *@name: name to be printed
 *@f: pointer to a function that takes name as an arg
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
