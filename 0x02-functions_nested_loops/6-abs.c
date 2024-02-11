#include "main.h"
/**
 * _abs - Computes absolute value of a number
 *
 * @n: the number to be checked
 * Description:
 * Return: Always 0(Success)
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * -1;
		return (result);
	} else if (n > 0)
	{
		return (n);
	}
	return (0);
}
