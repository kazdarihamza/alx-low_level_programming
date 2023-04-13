#include "main.h"

int _isdigit(char c);
int _strlen(char *s);
char *mul(char *num1, char *num2);

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * mul - multiplies two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	char *result;
	int i, j, carry, n1, n2, sum;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = '0';
		result[i] = '\0';
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + (result[i + j + 1] - '0') + carry;
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] += carry;
	}
	while (*result == '0' && *(result + 1) != '\0')
	{
		result++;
	}
	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *result;
	int i, j;

	if (argc != 3)
	{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (98);
			}
		}
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	return (98);
	}
	while (*result)
	{
	_putchar(*result);
	result++;
	}
	_putchar('\n');

	return (0);
}
