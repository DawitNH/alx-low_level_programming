#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Checks the random generated number's last digit
 * to be greater than 5, zero or less than 6 and not 0
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_dig);
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	return (0);
}
