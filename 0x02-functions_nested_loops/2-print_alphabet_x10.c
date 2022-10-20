#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times in lower case
 */

void print_alphabet_x10(void)
{
	int num = 1;

	while (num <= 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		num++;
	}
}
