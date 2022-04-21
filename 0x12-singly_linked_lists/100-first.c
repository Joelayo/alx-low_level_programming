#include "lists.h"

void printf_str(void) __attribute__((constructor));

/**
 * printf_str - prints a sentence before the main
*/

void printf_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
