#include "main.h"
/**
 * jack_bauer - prints every minute of the day frm 00:00-23:59
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 1440; i++)
	{
		_putchar('0' + (i / 60) / 10);
		_putchar('0' + (i / 60) % 10);
		_putchar(':');
		_putchar('0' + (i % 60) / 10);
		_putchar('0' + (i % 60) % 10);
		_putchar('\n');
	}
}
