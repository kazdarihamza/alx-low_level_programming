#include "main.h"
/**
 *_abs - function that gives the abslute value of a character.
 *@n: is a character from ascii
 *Return: always 0 (sucess)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		n = n;
		return (n);
	}
	return (0);
}
