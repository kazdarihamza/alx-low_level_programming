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
	int n,tf, tn, fv, tw, one;
	int new; 
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n >= 25)
	{
		tf = n / 25;
		new = n - (tf * 25);
		tn = new / 10;
		new -= (tn * 10);
		fv = new / 5;
		new -= (fv * 5);
		tw = new / 2;
		new -= (tw * 2);
		one = new;
		printf("%d\n", tf + tn + fv + tw + one);
	}
	if (n >= 10 && n < 25)
	{
		tn = n / 10;
		new = n - (tn * 10);
		fv = new / 5;
		new -= (fv * 5);
		tw = new / 2;
		new -= (tw * 2);
		one = new;
		printf("%d\n", tn + fv + tw + one);
	}
	if (n >= 5 && n < 10)
	{
		fv = n / 5;
		new = n - (fv * 5);
		tw = new / 2;
		new -= (tw * 2);
		one = new;
		printf("%d\n", fv + tw + one);
	}
	if (n >= 2 && n < 5)
	{
		tw = n / 2;
		new = n - (tw * 2);
		one = new;
		printf("%d\n", tw + one);
	}
	if (n == 1)
	{
		printf("1");
	}
	if (n < 1)
	{
		printf("0\n");
	}
	return (0);
}
