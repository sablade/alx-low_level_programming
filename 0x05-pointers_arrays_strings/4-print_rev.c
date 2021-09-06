#iniclude "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int strlen = 0, index = 0;

	strlen = _strlen(s);
	for (index = strlen - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length
 */
int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}
	return(inc);
}
