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
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
