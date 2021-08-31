#include <stdio.h>
/**
 * main - Print out all single digit numbers of base 10 using putchar()
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
