#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f - functions address
 * Retunr: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit (1);
	(*f)(name);

}
