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

	printf("Size of a char: %c bytes(s)\n", (char)sizeof(c));
	printf("Size of an int: %i bytes(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %li bytes(s)\n", (long int)sizeof(i));
	printf("Size of a long long int: %lli bytes(s)\n", (long long int)sizeof(i));
	printf("Size of a float: %f bytes(s)\n", (float)sizeof(f));

	return (0);
}
