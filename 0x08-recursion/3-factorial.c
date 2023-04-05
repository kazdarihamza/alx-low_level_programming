#include "main.h"
/**
 * factorial - prints the factorial of an integer
 * @n: integer
 * Return: the factorial
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
	else
		return (-1);
}
