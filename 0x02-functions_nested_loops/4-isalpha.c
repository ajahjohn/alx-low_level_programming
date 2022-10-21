#include "main.h"

/**
 * _isalpha - function checks if a character is an alphabet
 * @c: the character to check if is lower
 * Return: 1 if character is lower case, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
