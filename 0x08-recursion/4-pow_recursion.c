#include "main.h"
/**
 * _pow_recursion - returns the value of x raised by the power of y
 * @y: integer
 * @x: integer
 * Return: returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
