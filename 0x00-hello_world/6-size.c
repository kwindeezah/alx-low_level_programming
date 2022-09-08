#include <stdio.h>

/**
 * main -function prints out the size of various types on the computer
 * Return: 0 if successful
 */

int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %li bytes(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %lli bytes(s)\n", (long long)sizeof(i));
	printf("Size of a float: %f bytes(s)\n", (float)sizeof(f));

	return (0);
}
