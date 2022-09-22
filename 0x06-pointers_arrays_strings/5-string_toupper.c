#include "main.h"
/**
 * *string_toupper - converts a string to uppercase
 * @s: string to be converted to uppercase
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
