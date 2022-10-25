#include "main.h"

/**
 * __abs => function that prints the absolute value of a number
 * Designed by: Ajah John Nnaemeka
 * @n => Number to check for the absolute value
 * Return: returns the absolute avlue of @n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
