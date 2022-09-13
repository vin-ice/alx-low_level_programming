#include "main.h"
void _collect_and_print(int);
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				_putchar('-');
				_collect_and_print(n * -1);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n >= 100)
			{
				_collect_and_print(n);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
	_putchar('\n');
}

/**
 * *_collect_and_print - prints out digits in a number
 * * @i: digit to handle
*/
void _collect_and_print(int i)
{
	int collect[5], j = 0;

	while (i)
	{
		collect[j++] = i % 10;
		i /= 10;
	}
	while (j >= 0)
		_putchar('0' + collect[j--]);
}
