#include "main.h"
/**
*print_last_digit - evaluates the last digit of passed integer
*@n: integer to evaluate
*Return: returns the value evaluated
*/
int print_last_digit(int n)
{
	int lastdigit = n % 10;
	if (n < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
