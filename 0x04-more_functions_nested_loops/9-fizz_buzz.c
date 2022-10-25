#include "main.h"

/**
 * program for print 1 to 100 and skips multiples of 3 & 5
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3) != 0 && (num % 5) != 0)
		{
			if (num < 10)
			{
				_putchar(num);
				_putchar(' ');
			}
			else
			{
				if (num < 20)
				{
					_putchar('1');
					_putchar((num % 10) + '0');
					_putchar(' ');
				}
				else
				{
					_putchar(num / 10);
					_putchar((num % 10) + '0');
					_putchar(' ');
				}
			}
			
		}
		else
		{
			if ((num % 3) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
			}
			else
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
			}
		}
		num++;
	}
	_putchar('\n');
}
