#include "main.h"

/**
 * print_square -> prints a square depending on length of size;
 * @size: the parameter for printing square
 */

void print_square(int size)
{
	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
