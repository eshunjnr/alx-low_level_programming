#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the function
 * where n>5, n<6 or n=0
 * Return: 0 (successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	} else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	} else if ((n < 6) && (n != 0))
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	/* your code goes there */
	return (0);
}

