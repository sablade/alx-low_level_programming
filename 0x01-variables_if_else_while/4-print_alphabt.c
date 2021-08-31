#include <stdio.h>
/**
 * main - Prints all lowercase alphabets except e and q.
 * Return: Returns 0 everytime
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
