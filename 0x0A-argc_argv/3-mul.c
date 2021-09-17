#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers passed to main
 * @argc: arguments passed count
 * @argv: string array of arguments passed to main
 * Return: Return 1 if error, 0 if function runs correctly
 */
int main (int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
