#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - prints the sum of arguments given
*@n: number of args
*Return: sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
