#include "main.h"
/**
 * times_table - print the times table
 * Return: no return value
 */
void times_table(void)
{
	int num, ctr, rslt;

	for (num = 0; num < 10; num++)
	{

	for (ctr = 0; ctr < 10; ctr++)
	{
		rslt = num * ctr;
		_putchar(rslt + '0');
		_putchar(',');
		_putchar(' ');
	}
		_putchar('\n');
	}
}
