#include "main.h"
#include <stdio.h>
/**
 * main - prints out the name of the program executing
 * @argc: argument count
 * @argv: string array of arguments
 * Return: Returns 0 everytime
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n",argv[0]);
	return (0);
}
