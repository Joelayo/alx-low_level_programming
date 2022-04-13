#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: argument counter
 * @argv: argumentor vector
 * Return: Always 0 
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	return (printf("%d\n", get_op_func(operator)(num1, num2)));
}
