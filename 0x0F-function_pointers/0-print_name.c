#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: function's address
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit (1);
	(*f)(name);
}
