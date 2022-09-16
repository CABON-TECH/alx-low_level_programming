#include <stdio.h>

/**
 * main - entry
 * Description: Write a program that prints the numbers from 1 to 100,
 * followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");

	}

	printf("\n");
	return (0);
}
