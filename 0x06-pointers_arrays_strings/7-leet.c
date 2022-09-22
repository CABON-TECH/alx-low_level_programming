#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, n;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[i] == letters[n])
			{
				s[i] = numbers[n];
			}
		}
	}
	return (s);
}
