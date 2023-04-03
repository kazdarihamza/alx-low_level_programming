#include "main.h"
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return(p);
			}
			j++;
		}
		i++;
	}
	return(0);
}
