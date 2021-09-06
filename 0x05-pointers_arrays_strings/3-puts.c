#include "main.h"
/**
 * _puts - prints the string
 * @str: string to print out
 * Return: Returns nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
