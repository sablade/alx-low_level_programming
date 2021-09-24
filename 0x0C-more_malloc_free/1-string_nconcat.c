#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concantenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to copy
 * Return: Returns NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int strlen1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s1);
	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';
	return (p);
}

/**
 * _strlen - find length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
