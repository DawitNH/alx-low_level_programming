#include "main.h"

/**
 * _strlen - Finds the length of the string
 *
 * @s: pointer to char
 * Return: length
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
