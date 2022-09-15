#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: specified size
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= 1; j++)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar('\\');
			}
			printf('\n');
		}
	}
	_putchar('\n');
}
