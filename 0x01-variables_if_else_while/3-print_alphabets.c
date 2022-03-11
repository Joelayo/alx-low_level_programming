#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the alphabet in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z' && d <= 'Z')
	{
		putchar(c,d);
		c++;
		d++;
	}
	putchar('\n');

	return (0);
}

