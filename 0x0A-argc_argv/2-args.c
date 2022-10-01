#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: counts the arguments.
 * @argv: array containing arguments.
 * Return: Always return 0 on success.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
