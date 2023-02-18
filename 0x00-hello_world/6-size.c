#include <stdio.h>

/**
 * main - this is the entry point
 * @void: a void arguement or parameter
 *
 * Description: this is the main function for our
 * C program with void or no arguments
 * Return: the returned value is zero
 */
int main(void)
{
	char c;
	int i;
	float f;
	double d;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(i));
	printf("Size of a long long int: %li byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}
