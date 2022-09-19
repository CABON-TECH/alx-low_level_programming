#include "main.h"
/**
 * puts2 - prints every other char of a string starting
 * with first character followed by a new line
 * @str: parameter that points to a tring
 * Return: void
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
