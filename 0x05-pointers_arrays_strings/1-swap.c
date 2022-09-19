#include "main.h"

/**
 * swap_int - a function that swaps the values
 * of two integers.
 * @a: input int.
 * @b: input int.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
