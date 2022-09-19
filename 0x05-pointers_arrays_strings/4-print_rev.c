#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s : string to be reversed
 */
void print_rev(char *s)
{
	int count = 0;
       char collect[100];
	
	while (count != '\0')
		collect[count++] = *(s + count); 
	while (count >= 0)
		_putchar(collect[count--]);
	_putchar('\n');
}
