#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to return length
 * Return: Returns the length of the string
 */
int _strlen(char *s)
{
	int i, c;

	i = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		i++;
	}
	return (i);
}
