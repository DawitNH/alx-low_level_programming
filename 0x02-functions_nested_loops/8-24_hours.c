#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 *
 * Description:
 * Return: void
 */
void jack_bauer(void)
{
	for (int j = 0; j < 24; j++)
	{
		for (int i = 0; i < 60; i++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
