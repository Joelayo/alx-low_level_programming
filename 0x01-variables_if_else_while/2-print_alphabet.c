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
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}

