#include "main.h"
/**
 * print_last_digit - Prints out the last digit of a number
 * @n: number to check last value
 * Return: Return the last digit of the number provided
 */
int print_last_digit(int n)
{
	int num = n % 10;

	_putchar(num + '0');
	return (n % 10);
}
