#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;
	
	if (size == 0)
	{
		return(NULL);
	}
	
	str = malloc((size) * sizeof(char));
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	str[n] = '\0';
	return(str);
}
