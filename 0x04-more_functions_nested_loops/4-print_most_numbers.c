#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */
void print_most_numbers(void)
{
	int number;
	for (number = 0; number < 10; number++)
	{
		if ((number == 2) || (number == 4))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar('\n');
}
