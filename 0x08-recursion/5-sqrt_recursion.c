#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * @root: root of n
 * Return: returns the square root of n
 */
int froot(int n, int root);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (froot(n, 0));
}

/**
 * froot - finds the root of an integer
 * @n: integer
 * @root: root of n
 * Return: returns the root of n
 */
int froot(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);

	return (froot(n, root + 1));
}
