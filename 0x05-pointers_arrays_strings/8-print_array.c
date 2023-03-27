#include "main.h"
#include <stdio.h>
/**
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%i, ", a[i]);
	}
	printf("%i\n", a[i]);
}	
