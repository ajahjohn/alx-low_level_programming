#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	int stopPoint = 32;

	for (count = 0; count < stopPoint; count++)
	{
		sum = fib1 + fib2;

		printf("%lu", sum);
		if (count == (stopPoint - 1))
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = sum;
	}
	return (0);
}
