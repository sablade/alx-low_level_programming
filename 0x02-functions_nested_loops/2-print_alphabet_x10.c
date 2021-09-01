#include "main.h"
/**
 * print_alphabet_x10 - prints the lower case alphabets 10 times
 * return: returns nothing
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 0; count < 10; count++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	}
}
