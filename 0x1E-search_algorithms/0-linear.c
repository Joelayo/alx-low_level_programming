#include "search_algos.h"

/**
 * linear_search - linear search algorithm for arrays.
 * @array: A pointer to inputed array.
 * @size: The size of array.
 * @value: The value to search for.
 * Return: The index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	if (!array || size <= 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%lu] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
