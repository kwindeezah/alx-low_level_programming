#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int r;

	r = isalpha('H');
	putchar(r + '1');
	r = isalpha('o');
	putchar(r + '1');
	r = isalpha(108);
	putchar(r + '1');
	r = isalpha(';');
	putchar(r + '0');
	putchar(10);
	return (0);
}
