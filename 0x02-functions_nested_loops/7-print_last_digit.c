#include "main.h"
/**
*print_last_digit - evaluates the last digit of passed integer
*@n: integer to evaluate
*Return: returns the value evaluated
*/
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');

	return (n);
}
