#include "main.h"
/**
 * swap_int - swaps two pointers
 * @a: 1st pointer
 * @b: 2nd pointer
 */
void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
