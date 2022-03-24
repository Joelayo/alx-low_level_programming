#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int x, y;
	char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 54; y++)
		{
			if (((s[x] <= 'z' && s[x] >= 'a') || (s[x] <= 'Z' && s[x] >= 'A'))
			&& s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (s);
}
