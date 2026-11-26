#include "function_pointers.h"

/**
 * print_name - Calls a function pointer to print a name.
 * @name: Name string to pass to the callback function.
 * @f: Pointer to a function that takes a char * and returns nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
