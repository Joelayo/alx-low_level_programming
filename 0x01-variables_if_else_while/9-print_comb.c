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
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;

		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

