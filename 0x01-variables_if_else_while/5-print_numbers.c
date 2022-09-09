#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints all single digit numbers
 * of base 10 from 0
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
