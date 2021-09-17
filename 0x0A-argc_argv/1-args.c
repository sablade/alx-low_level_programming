#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed to the function
 * @argc: arguments passed count
 * @argv: string array of arguments passed
 * Return: Returns 0 everytime
 */
int main (int argc, char *argv[])
{
	(void) argv;

	printf("%d\n",argc - 1);
	return (0);
}
