#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 * Return: returns nothing 
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
