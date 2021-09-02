#include "main.h"
/**
 * _abs - checks for the absolute value of a number
 * @n: number to be passed
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
