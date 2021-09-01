#include "main.h"
/**
 * _islower - checks if a character is lower case
 * @c - character to check
 * return: returns 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
