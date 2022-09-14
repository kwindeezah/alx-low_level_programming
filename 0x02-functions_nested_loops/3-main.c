#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - checks code
 *
 * Return: 0
 *
 */

int main(void)
{
	int r;

	r = islower('H');
	putchar(r + '0');
	r = islower('o');
	putchar(r + '0');
	r = islower(108);
	putchar(r + '0');
	putchar(10);
	return (0);
}
