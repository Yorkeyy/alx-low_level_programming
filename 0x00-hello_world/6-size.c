#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)

{
	printf("size of char: %ibyte(s)\n", sizeof(char));
	printf("size of int: %ibyte(s)\n", sizeof(int));
	printf("size of a long int: %ibyte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %ibyte(s)\n", sizeof(float));
	return (0);

}
