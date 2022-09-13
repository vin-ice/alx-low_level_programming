#include "main.h"
/**
 * times_table- prints the 9-times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			if ((i * j) / 10 > 0) 
				_putchar('0' + (i * j) / 10);
			else
				_putchar(' ');
			_putchar('0' + (i * j) % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
