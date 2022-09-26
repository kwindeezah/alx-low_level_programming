#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area to be filled.
 * @b: char, constant byte.
 * @n: size of the memory to print.
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
