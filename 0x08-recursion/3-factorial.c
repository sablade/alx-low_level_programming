#include "main.h"
/**
 * factorial - finds factorial of a given number
 * @n: number to find factorial of
 * Return: Return the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
