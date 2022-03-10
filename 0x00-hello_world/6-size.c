#include <stdio.h>
/**
 * main - checks the sizeof datatypes
 * Description: prints the size of various types
 * Return: return zero
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
	return (0);
}

