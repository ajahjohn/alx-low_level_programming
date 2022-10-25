#include "main.h"

/**
 * _isupper -> checks if a number is upper case
 * @c: Character that will be checked
 * Return: 0 or 1;
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
