#include "main.h"

/**
 *  print_line - prints a line n times followed by a new line
 *  @n: numbers of times to print line
 *  Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
