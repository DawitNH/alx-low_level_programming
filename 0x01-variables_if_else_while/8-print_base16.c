#include <stdio.h>
/**
 * main - Entrty point
 *
 * Description:
 * Return: Always 0(Success)
 */
int main(void)
{
	char ch;
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
