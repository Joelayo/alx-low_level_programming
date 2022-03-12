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
	int a;
	char b;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b < 'g')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

