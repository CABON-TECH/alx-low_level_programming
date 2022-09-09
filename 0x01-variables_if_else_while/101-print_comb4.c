#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(i);
				putchar(i);
				if (i < 55 || j < 56 || k < 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}

