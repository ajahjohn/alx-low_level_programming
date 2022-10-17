#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 ** main-program entry point.
 *
 * Description: The This program will assign a random
 * number to the variable n each time it is executed.
 * Complete the source code in order to print the last digit of
 * the number stored in the variable n.
 * Return:0-no error,non zero value if error.
**/

int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n >  0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
