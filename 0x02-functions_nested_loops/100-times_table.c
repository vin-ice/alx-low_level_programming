#include "main.h"
/**
 * print_times_table - prints the n-times table
 *@n: number to be printed
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j <= 99)
				_putchar(' ');
			if (i * j <= 9)
				_putchar(' ');
			if (i * j >= 100)
			{
				_putchar(((i * j) / 100) + '0');
				_putchar(((i * j) / 10) % 10 + '0');
			}
			else if (i * j <= 99 && i * j >= 10)
			{
				_putchar(((i * j) / 10) + '0');
			}
			_putchar((i * j) % 10 + '0');
		}
		_putchar('\n');
	}
	}
}
