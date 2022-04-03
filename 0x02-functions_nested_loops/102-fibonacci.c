#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: integer
 */
int main(void)
{
	int firstNum = 1;
	int secondNum = 2;
	int sum = firstNum + secondNum;
	int i;

	printf("%d, %d, ", firstNum, secondNum);
	for (i = 3; i < 50; i++)
	{
		printf("%d", sum);
		firstNum = secondNum;
		secondNum = sum;
		sum = firstNum + secondnum;
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
