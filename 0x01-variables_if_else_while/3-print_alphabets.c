#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 * Return: Always 0(Success)
 */
int main(void)
{
	char lower_ch, upper_ch;

	for (lower_ch = 'a'; lower_ch <= 'z'; lower_ch++)
	{
		putchar(lower_ch);
	}
	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
	{
		putchar(upper_ch);
	}
	putchar('\n');
	return (0);
}
