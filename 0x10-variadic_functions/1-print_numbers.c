#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - prints args
*@separator: the separator between args
*@n: number of args
*Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, value;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(ap, unsigned int);
		printf("%d", value);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);

}
