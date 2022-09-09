#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int f, g, h;

	for (f = '0'; f <= '9'; f++)
	{
		for (g = 0; g <= '9'; g++)
		{
			for (h = 0; h <= '9'; h++)
			{
				if (f < g && g < h)
				{
					putchar(f);
					putchar(g);
					putchar(h);

					if (f != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

