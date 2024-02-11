#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 * Return: Always 0(Succes)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
