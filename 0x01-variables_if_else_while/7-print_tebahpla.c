#include <stdio.h>
/**
 * main - Prints the alphates in lowercase in reverse
 * Return: returns 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
