#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: counts number of arguments.
 * @argv: array containing the arguments.
 * Return: Always 0 on success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
