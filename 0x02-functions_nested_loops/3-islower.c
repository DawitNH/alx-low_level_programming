#include "main.h"
/**
 * _islower - Checks for lower case character
 * return 1 if it lowercase and 0 if not.
 *
 * @c: the character to be checked
 * Return: Always 0(success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
