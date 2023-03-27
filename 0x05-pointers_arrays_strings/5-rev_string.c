#include "main.h"
/**
 * 
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
        	_putchar(s[i]);
	}
	_putchar('\n');
}
