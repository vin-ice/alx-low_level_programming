#include "main.h"
/**
 * more_numbers - prints numbers 0-14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar('0' + j);
			j++
		}
	_putchar('\n');
	}
}
