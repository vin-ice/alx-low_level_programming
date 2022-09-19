#include "main.h"
/**
 * rev_string - reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int collect[100], count = 0;

	while (*s != '\0')
	{
		collect[count] = *(s + count);
		count++;
	}
	
	while (count >= 0)
		_printchar(collect[count--]);
}
