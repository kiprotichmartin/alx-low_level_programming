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
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
