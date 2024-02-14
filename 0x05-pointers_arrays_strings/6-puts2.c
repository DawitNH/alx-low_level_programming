#include "main.h"

/**
 * puts2 - Prints every other character
 *
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
