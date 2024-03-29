#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints number upto 98
 *
 * @n: the number
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
	} else if (n == 98)
	{
		printf("%d", n);
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			printf("%d, ", i);
		}
	}
	printf("\n");
}
