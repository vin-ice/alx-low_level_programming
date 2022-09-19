#include "main.h"
/**
 * puts_half - prits half of a string
 * @str: String to be evaluated
 */
void puts_half(char *str)
{
	int counter = 0, half_len;

	while (*(str + counter) != '\n')
		counter++;

	if (counter % 2 == 0)
		half_len = counter % 2;
	else
		half_len = (counter - 1) / 2;

	for (; half_len <= counter; half_len++)
		_putchar(*(str + half_len));
	
	_putchar('\n');
}
