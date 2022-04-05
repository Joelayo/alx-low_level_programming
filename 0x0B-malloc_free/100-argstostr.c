#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_addChar (char *str, char c)
{
int size, i;
char *m;

size = _strlen(str);

m = malloc((size + 1) * sizeof(char) + 1);
if (m == 0)
	return (0);

for (i = 0; i <= size; i++)
	m[i] = str[i];

m[i + 1] = c;
m[i + 2] = '\0';

return (m);
}


/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{
	int i, cmpt = 0;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		if (s[i]  == ' ' && s[i + 1] != ' ')
			cmpt++;
	}

	return (cmpt + 1);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
int i = 0, nc = 0, j = 0, cmpt = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

for (; i < ac; i++, nc++)
	nc += _strlen(av[i]);

s = malloc(sizeof(char) * nc + 1);
if (s == 0)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, cmpt++)
		s[cmpt] = av[i][j];

	s[cmpt] = '\n';
	cmpt++;
}
s[cmpt] = '\0';

return (s);
}
