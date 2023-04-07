#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file
 * @argc: arg count
 * @argv: arg variable
 * Return: alywas 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
