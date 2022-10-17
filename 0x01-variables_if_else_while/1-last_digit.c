#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program entry point starts here.
 *
 * Description: The code to generate random number and check the last digit
 *
 * Return:0 if no error, non-zero value if error.
 */

int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lgidit);
	}
	else if (ldigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldigit < 6 && ldigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
