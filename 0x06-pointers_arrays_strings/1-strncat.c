#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: destination
 * @src: Source
 * @n: number of characters
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destCount, srcCount;

	destCount = 0;
	srcCount = 0;
	while (*(dest + destCount) != '\0')
	{
		destCount++;
	}
	while (srcCount < n)
	{
		*(dest + destCount) = *(src + srcCount);
		if (*(src + srcCount) == '\0')
			break;
		destCount++;
		srcCount++;
	}
	return (dest);
}
