#include <stdio.h>
/**
 * main - the program entry point
 *
 * Return: Return:0 if no error, non zero if error.
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
