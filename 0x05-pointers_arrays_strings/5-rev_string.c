#include "main.h"
/**
 * rev_string - reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char collect[1000];
	int count = 0;

	while (*(s + count) != '\0')
	{
		collect[count] = *(s + count);
		count++;
	}
	
	while (--count >= 0)
		_putchar(collect[count]);
}
