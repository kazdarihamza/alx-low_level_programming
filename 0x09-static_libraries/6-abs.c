#include "main.h"
/**
 *_abs - function that gives the abslute value of a character.
 *@i: is a character from ascii
 *Return: always 0 (sucess)
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
	{
		i  = i;
		return (i);
	}
	return (0);
}
