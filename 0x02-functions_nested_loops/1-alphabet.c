#include "main.h"
/**
 * print_alphabet - Function to print out lower case alphabets
 * Return: Returns nothing
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
