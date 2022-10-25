#include "main.h"

/**
 * print_square -> prints a square depending on length of size;
 * @size: the parameter for printing square
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			if (x > 0)
			{
				for (y = 1; y <= size; y++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
