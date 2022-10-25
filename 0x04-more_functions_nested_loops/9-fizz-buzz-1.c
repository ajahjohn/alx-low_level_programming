#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz -> to print numbers from 1 to 100 replacing 3 and 5
 */

void fizz_buzz(void)
{
	int x;

	for (x = '0'; x < 100; x++)
	{
		if (x == 100)
		{
			printf("Buzz");
		}
		else if (x % '3' == '0')
		{
			printf("Fizz ");
		}
		else if (x % '5' == '0')
		{
			printf("Buzz ");
		}
		else if (x % '3' == '0' && x % '5' == '0')
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
}
