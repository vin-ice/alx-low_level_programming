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
	half_len = (counter % 2 == 0) ? counter / 2 : (counter - 1) / 2;
	
	while (half_len <= counter)
	{
		_putchar(*(str + half_len));
		half_len++;
	}
	
	_putchar('\n');
}
