#include "main.h"

/**
 * print_diagonal -> prints diagonal on the terminal
 * @n: Number of parameter to use in printing
 */

void print_diagonal(int n)
{
	int x = 0;
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			if (x > 0)
			{
				for (m = 0; m < x; m++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
}
