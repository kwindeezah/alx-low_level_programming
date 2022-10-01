#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: counts the arguments.
 * @argv: array containing arguments.
 * Return: Always return 0 on success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
