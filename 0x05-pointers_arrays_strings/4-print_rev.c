#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: input string.
 * Return: void.
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			count++
		}
		else
		{
			break;
		}
		for (count--; count >= 0; count--)
		{
			_putchar(s[count]);
		}
	}
	_putchar('\n');
}
