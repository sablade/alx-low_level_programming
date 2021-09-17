#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive arguments passed to main
 * @argc: arguments passed count
 * @argv: string vector of arguments passed to main
 * Return: Return 1 if Error, 0 if function runs perfectly
 */
int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
