#include <stdio.h>
/**
 * main - Print single digit number combination with spaces and commas.
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '8'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
