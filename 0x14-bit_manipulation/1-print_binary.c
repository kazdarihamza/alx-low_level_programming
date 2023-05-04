#include "main.h"
#include <stdio.h>
int _putchar(char c);
/**
  *print_binary - a function that prints a decimal in binary
  *@n: the number
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask != 0)
	{
		if (n & mask)
		{
			leading_zeros = 0;
			_putchar('1');
		}
			else if (!leading_zeros)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
