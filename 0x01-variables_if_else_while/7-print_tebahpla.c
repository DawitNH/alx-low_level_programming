#include <stdio.h>
/**
 * main  - Entry point
 *
 * Description:
 * Return: Always 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
