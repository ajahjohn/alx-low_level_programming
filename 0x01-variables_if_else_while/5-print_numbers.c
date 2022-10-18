#include <stdio.h>
/**
 * main - the program entry point
 *
 * Return: 0 for no error, non zero for error
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
