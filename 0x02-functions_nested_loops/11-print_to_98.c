#include <stdio.h>
#include "main.h"
/**
 *add - add two integers
 *@x: integer argument
 *@y: integer argument
 *Return: sum
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}	
