#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments passed to the function
 * @argc: arguments passed count
 * @argv: string array of arguments passed
 * Return: Returns 0 everytime
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",argv[i]);
	}
	return (0);
}
