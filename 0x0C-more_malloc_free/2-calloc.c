#include <stdlib.h>
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

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements in the array.
 * @size: size of each element in the array.
 * Return: NULL if nmemb or size is 0,
 * NULL if malloc fails.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
