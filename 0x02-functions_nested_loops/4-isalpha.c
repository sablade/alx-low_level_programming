#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c: character to check
 * Return: returns 1 if alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
