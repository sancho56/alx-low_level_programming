#include <stdio.h>
/**
 * main - single digit combination
 * Description: This program prints all possible combination of number
 * Return: return 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(', ');
		i++;
	}
	putchar('\n');
	return (0);
}

