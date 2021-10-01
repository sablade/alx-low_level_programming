#include "function-pointers.h"
/**
 * array_iterator - function that performs an action on array elements
 * array: array to be iterated on
 * size: size of the array
 * action: function pointer to action function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
