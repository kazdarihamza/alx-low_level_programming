#include "main.h"
/**
 *print_times_table - print multiplication table up to n
 *@n: integer argument
 */
void print_times_table(int n)
{
	int row column result;

	if (n > 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				result = (row * column);

				if (column == 0)
				{
					_putchar('0' + result);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (result <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
					else if (result > 9 && result < 100)
					{
						_putchar(' ');
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else if (result >= 100)
					{
						_putchar('0' + (result / 100));
						_putchar('0' + (result / 10) % 10);
						_putchar('0' + (result % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
