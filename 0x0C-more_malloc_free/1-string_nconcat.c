#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2.
 * Return: point to a newly allocated memory,
 * NULL on fail.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, lens, i;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= s2)
		n = len2;

	lens = len1 + n;

	ptr = malloc(lens + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lens; i++)
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	ptr[i] = '\0';
	return (ptr);
}
