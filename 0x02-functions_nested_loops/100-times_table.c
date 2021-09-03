#include "main.h"
/**
 * print_times_table - prints the times table for the number given
 * @n: number to print times table from
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int num = 0, ctr, rst;

	if (n < 0 || n > 15)
		return;
	while (num <= n)
	{
		for (ctr = 0; ctr <= n; ctr++)
		{
			rst = num * ctr;
			if (rst > 99)
			{
				_putchar(rst / 100 + '0');
				_putchar((rst / 10 % 10) + '0');
				_putchar(rst % 100 + '0');
			}
			else if (rst > 9)
			{
				_putchar(' ');
				_putchar(rst / 10 + '0');
				_putchar(rst % 10 + '0');
			}
			else if (ctr != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(rst + '0');
			}
			else
			{
				_putchar(rst + '0');
			}
			if (ctr != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num++;
	}
}
