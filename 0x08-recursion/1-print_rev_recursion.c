#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String to print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(++s);
	else
		_putchar(*s);
}
