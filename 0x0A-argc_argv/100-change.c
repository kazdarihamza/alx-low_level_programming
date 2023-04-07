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
	int n, sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	sum += n / 25;
	n %= 25;
	sum += n / 10;
	n %= 10;
	sum += n / 5;
	n %= 5;
	sum += n / 2;
	n %= 2;
	sum += n / 1;
	printf("%d\n", sum);
	return (0);
}
