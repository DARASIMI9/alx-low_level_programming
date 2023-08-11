#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: return 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

		printf("Last digit of %d is %d and greater than 5\n", n, m);
			if (m > 5)
				printf("greater than 5\n");
			else if (m == 0)
				printf("\n");
			else		
				printf("less than 6 and not 0\n");

	return (0);
}
