#include "main.h"
/**
 * puts2 - prints every other character in a string from the first character
 * @str: Stringto be evaluated
 */
void puts2(char *str)
{
	int counter = 0;

	while (*(str) != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*str);
		counter++;
		str++;
	}
	_putchar('\n');
}
