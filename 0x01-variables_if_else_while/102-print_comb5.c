#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int n, m, o, p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (o = 0; o <= 9; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(' ');
					putchar(o + '0');
					putchar(p + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
