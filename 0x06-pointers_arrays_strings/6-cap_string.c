#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int d = 0;

	while (str[d])
	{
		while (!(str[d] >= 'a' && str[d] <= 'z'))
			d++;

		if (str[d - 1] == ' ' ||
		    str[d - 1] == '\t' ||
		    str[d - 1] == '\n' ||
		    str[d - 1] == ',' ||
		    str[d - 1] == ';' ||
		    str[d - 1] == '.' ||
		    str[d - 1] == '!' ||
		    str[d - 1] == '?' ||
		    str[d - 1] == '"' ||
		    str[d - 1] == '(' ||
		    str[d - 1] == ')' ||
		    str[d - 1] == '{' ||
		    str[d - 1] == '}' ||
		    d == 0)
			str[d] -= 32;

		d++;
	}

	return (str);
}
