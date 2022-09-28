#include "main.h"
/**
 * _strlen_recursion - strlen with recursion
 * @s: string to claculate length
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
