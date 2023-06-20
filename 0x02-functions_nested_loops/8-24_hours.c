#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * Description: starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs < 24)
	{
		while (mins < 60)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		mins = 0;
		hrs++;
	}
}
