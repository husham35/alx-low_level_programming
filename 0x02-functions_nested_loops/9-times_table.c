#include "main.h"

/**
 * times_table - prints the 9 times table beginning from 0,
 * Description: 9 times table
 */

void times_table(void)
{
	int factor = 0;
	int count;
	int computed_value;

	while (factor < 10)
	{
		count = 0;
		while (count < 10)
		{
			computed_value = factor * count;

			if (computed_value > 9)
			{
				_putchar(computed_value / 10 + '0');
				_putchar(computed_value % 10 + '0');
			}
			else if (count != 0)
			{
				_putchar(' ');
				_putchar(computed_value + '0');
			}
			else
			{
				_putchar(computed_value + '0');
			}

			if (count != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			count++;
		}
		_putchar('\n');
		factor++;
	}
}
