#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: the character to be cheked
 * Return: 1 if it upper,
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
