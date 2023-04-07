#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments count
 * @argc: argument count
 * @argv: argument variable
 * Return: always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
