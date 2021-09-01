#include "main.h"
/**
 * main - Print The Required Text Out
 * Return: Return 0 on succes
 */
int main(void)
{
	char school[8] = "_putchar";
	int i;
	
	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}
	_putchar('\n');
	return (0);
}
