#include "main.h"
/**
 * print_square - prints a square
 * @size: size of sides
 */
void print_square(int size)
{
	int l, w;
	
	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (w = 1; w <= size; w++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
