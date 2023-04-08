#include "main.h"
/**
 *_islower - function that checks for lowercase character.
 *@c: is the character from ascii
 *Return: always 0 (success)
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
