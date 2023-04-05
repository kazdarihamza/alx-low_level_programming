#include "main.h"
/**
 * is_prime_number - checks if number is prime or not
 * @n: integer
 * @i: divisor
 * Return: 0 if prime, 1 if not
 */
int is_prime(int n, int i);

int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);

	return (is_prime(n, i));
}

/**
 * is_prime - checks if number is prime or not
 * @n: integer
 * @i: divisor
 * Return: return if the n is prime or not
 */
int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}
