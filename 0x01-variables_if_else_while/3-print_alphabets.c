#include <stdio.h>
/**
 * main - lower and uppercase alphabet
 * Description: This program prints the lowercase and uppercase of alphabet in one
 * Return: return 0
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (a = 'a' ; a < 'z' ; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; a < 'Z' ; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}

