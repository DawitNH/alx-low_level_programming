#include "main.h"

/**
 * puts_half - Prints the second half of the string
 *
 * @str: pointer to the char
 * Return: void
 */

void puts_half(char *str)
{
	int count, half;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		half = count / 2;
	} else
	{
		half = (count - 1) / 2;
	}
	while (half < count)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
