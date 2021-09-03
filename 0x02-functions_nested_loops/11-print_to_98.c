#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from a number (n) to 98
 * @n: number to start printing the natural numbers from
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}

	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
