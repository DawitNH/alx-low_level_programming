#include "main.h"

/**
 * rev_string - Prints the string in reverse
 *
 * @s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int count, i, j;
	char *str, temp;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	str = s;
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
