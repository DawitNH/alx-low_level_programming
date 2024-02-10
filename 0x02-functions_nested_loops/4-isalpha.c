#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * returns 1 if it is alphabetic character and
 * 0 if it is not
 *
 * @c: the parameter to be checked
 * Return: Always 0(Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
