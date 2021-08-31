#include <stdio.h>
/**
 * main - Prints all lowercase alphabets except e and q.
 * Return: Returns 0 everytime
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
