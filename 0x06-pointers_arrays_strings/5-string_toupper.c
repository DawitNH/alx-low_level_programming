#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase letters
 *
 * @c: the string to be uppercased
 * Return: uppercase string
 */

char *string_toupper(char *c)
{
	int count;

	count = 0;
	while (*(c + count) != '\0')
	{
		if (*(c + count) >= 97 && *(c + count) <= 122)
		{
			*(c + count) -= 32;
		}
		count++;
	}
	return (c);
}
