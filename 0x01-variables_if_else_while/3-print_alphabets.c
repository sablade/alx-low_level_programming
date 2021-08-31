#include <stdio.h>
/**
 * main - Prints out all alphabets, upper case first followed by lower case.
 * Return: returns 0 everytime to halt code execution.
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
