#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: input char.
 * Return: always (0).
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
		return (i);
}
