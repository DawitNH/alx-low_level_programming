#include "main.h"

/**
 * print_rev - Prints the string in reverse
 *
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	for (count--; count >= 0; count--)
	{
		_putchar(*(s + count));
	}
	_putchar('\n');
}
