#include "function_pointers.h"
#include <string.h>
#include "3-calc.h"

/**
 * op_add - funtion to sum two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 * Return: Value.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - funtion to subtract two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 * Return: Value.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtion to multiply two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 * Return: Value.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funtion to divide two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 * Return: Value.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - funtion to get module of two numbers.
 *
 * @a: number 1.
 * @b: number 2.
 * Return: value.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
