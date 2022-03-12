#include <stdio.h>
#include <stdlib.h>
/**
 * main - main body of program
 * Description: Print all single digit of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 1000)
	{
		j = i % 10; /* singles digit */
		k = (i / 10) % 10; /* tens digit */
		l = i / 100; /* hundreds digit */

		if (l < k && k < j)
		{
			putchar(l + '0');
			putchar(k + '0');
			putchar(j + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}

