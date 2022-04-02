#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: String variable
 * Return: no return
 */

int _strlen(char *s)
{
	int r;

	r = 0;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
