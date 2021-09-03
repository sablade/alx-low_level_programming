#include "main.h"
/**
 * times_table - print the times table
 * Return: no return value
 */
void times_table(void)
{
	int num = 0, ctr, rst;

	while (num <= 9)
	{
		for (ctr = 0; ctr <= 9; ctr++)
		{
			rst = num * ctr;
			if (rst > 9)
			{
				_putchar(rst / 10 + '0');
				_putchar(rst % 10 + '0');
			}
			else if (ctr != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(rst + '0');
			}
			if (ctr != num)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num++;
	}
}
