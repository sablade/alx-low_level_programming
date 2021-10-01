#include "function_pointers.h"
/**
 * print_name - function that prints name from a funtcion pointer
 * @name: string to print out
 * @f: function pointer with string argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
