#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints add numbers
 * @argc: integer
 * @argv: char pointer
 * Return: 0 if no error and 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
