#ifndef _variadic_funtions_h_
#define _variadic_funtions_h_

typedef struct print_all
{
	char all;
	void (*func)(va_list arguments);
} simbol_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
