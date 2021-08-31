#include <stdio.h>
/**
 * main - Prints out all single digit base 10 numbers.
 * Return: Returns 0 to break code execution
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num ++)
	{
		putchar(num);
	}
	printf("\n");
	return (0);
}
