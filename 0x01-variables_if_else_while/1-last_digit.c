#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n);
	else if (n == 6)
		printf("Last digit of %i is %d and is 0");
	else
		printf("Last digit of %i is %d and is less than 6 and not 0");
	return (0);
}

