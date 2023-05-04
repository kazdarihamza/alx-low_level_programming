#include "main.h"

/**
*
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			sum = sum * 2 + (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (sum);
}

