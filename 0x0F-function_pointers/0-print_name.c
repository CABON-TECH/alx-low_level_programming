#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: pointer to variable name
 * @f: pointer to a function f that takes a pointer to a
 * char as an argument and returns void
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
