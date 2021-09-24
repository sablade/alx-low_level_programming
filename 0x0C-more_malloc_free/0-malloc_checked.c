#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory dynamically using malloc
 * @b: size of memory to allocate
 * Return: Returns a pointer to the allocated memory
 */
void  *malloc_checked(unsigned int b)
{
	int *size;

	size = (int *)malloc(b);
	if (size == null)
	{
		exit(98);
	}
	return (size);
}
