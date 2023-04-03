#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to the first char in the string
 * @needle: pointer to the first char in the string
 * Return: returns the string
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
