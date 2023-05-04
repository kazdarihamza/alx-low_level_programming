#include "main.h"
/**
  *get_endianness - a function that checks the endianness.
  *Return: 1 or 0
  */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
