#include "main.h"
/**
*print_last_digit - evaluates the last digit of passed integer
*@n: integer to evaluate
*Return: returns the value evaluated
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
