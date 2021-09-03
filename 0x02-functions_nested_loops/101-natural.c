#include <stdio.h>
/**
 * main - prints out the sum of multiples of 3 or 5 below 1024
 * Return: return 0
 */
int main(void)
{
	int num = 1, total = 0;

	while (num < 1024)
	{
		if (num % 3 == 0)
		{
			total += num;
		}
		else if (num % 5 == 0)
		{
			total += num;
		}
		num++;
	}
	printf("%d\n", total);
	return (0);
}
