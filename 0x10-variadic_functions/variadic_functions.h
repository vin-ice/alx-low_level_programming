#ifndef _VARIADIC_H_
#define _VARIADIC_H_
#include <stdarg.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
struct print
{
	char *t;
	void (*f)(va_list p);
};
typedef struct print print_t;
void print_all(const char * const format, ...);

#endif
