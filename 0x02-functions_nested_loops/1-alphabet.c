#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case;
 */

void print_alphabet(void)
{
	char value;

	for (value = 'a'; value <= 'z'; value++)
		_putchar(value);
	_putchar('\n');
}
