#include "main.h"

/**
 * puts - prints string + newline to stdout
 * str: String variable
 * Return: no return
 */

void _puts(char *str)
{
	int a = 0;

	while(str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
