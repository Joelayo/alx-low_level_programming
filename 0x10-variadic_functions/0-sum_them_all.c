#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that prints anything
 * @n: number
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list param;

	if (n == 0)
		return (0);

	va_start(param, n);
	for (i = 0; i < n; i++)
		sum += va_arg(param, int);
	va_end(param);
	return (sum);
}
