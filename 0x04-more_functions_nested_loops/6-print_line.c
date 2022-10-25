#include "main.h"

/**
 * print_line -> prints straight line depending on n value
 *
 * @n: parameter to be tested with
 * Return: program feedback
 */

void print_line(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
