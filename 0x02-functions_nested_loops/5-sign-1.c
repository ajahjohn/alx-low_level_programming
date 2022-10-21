#include "main.h"

/**
 * print_sign: function to print the sign of a number
 * description: returns different values at different checks
 * @n the number to check
 * Return: 1 if n is greater 0, 0 if n is 0, -1 if n < 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

