#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument variable
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int n, tf, tn, fv, tw, one;
	int sum;

	if (argc != 2)
		printf("Error\n");
		return (1);
	n = atoi(argv[1]);
	if (n < 0)
		printf("0\n");
		return (0);
	while (n > 0)
	{
		if (n >= 25)
		{
			n -= 25;
			sum++;
		}
		else if (n >= 10)
		{
			n -= 10;
			sum++;
		}
		else if (n >= 5)
		{
			n -= 5;
			sum++;
		}
		else if (n >= 2)
		{
			n -= 2;
			sum++;
		}
		else
		{
			n -= 1;
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
