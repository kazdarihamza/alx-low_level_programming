#include "main.h"
/**
 *
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else
	{
		if (y == 0)
			return (1);
		else if (y == 1)
			return (x);
		if (y > 1)
		{
			return (x * _pow_recursion(x, y - 1));
		}
		else if (y < 0)
			return (-1);
	}
	return (0);
}	
