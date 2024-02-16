#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @str: the string to be encoded
 * Return: 1337 encoded string
 */

char *leet(char *str)
{
	int count = 0, i;
	int uppercase[] = {65, 69, 79, 84, 76};
	int lowercase[] = {97, 101, 111, 116, 108};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + count) == lowercase[i] || *(str + count) == uppercase[i])
			{
				*(str + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (str);
}
