#include "main.h"

/**
 * print_numbers -> function to print numbers from 0 to 9
 * Return: returns the number
 */

void print_numbers(void)
{
	int num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
}
