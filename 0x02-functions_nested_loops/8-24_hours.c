#include "main.h"
#include "time.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h != 24)
	{
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
	h++;
	m = 0;
	}
}
