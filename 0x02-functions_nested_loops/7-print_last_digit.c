#include "main.h"
/**
 * print_last_digit - Prints the last digit digit of the number
 *
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_dig;

	last_dig = n % 10;
	if (n < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
