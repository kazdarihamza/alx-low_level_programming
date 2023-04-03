#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: pointer to the first character of the string
 * @c: the character we're looking for
 * Return: returns the first occurence of the character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
