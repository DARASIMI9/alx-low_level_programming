#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
*/
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

		printf("last digit of %d is %d and is ", n, d)
		if (d > 5)
			printf("greater then 5\n");
		else if (d == 0)
			printf(0\n");
		else
			printf("less than 6 and not 0\n");

	return (0);
}
