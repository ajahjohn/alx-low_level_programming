#include "main.h"

/**
 * _islower - function checks if a character is lower case
 * @c: the character to check if is lower
 * Return: 1 if character is lower case, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
