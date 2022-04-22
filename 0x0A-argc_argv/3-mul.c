#include <stdio.h>
/**
 * main - prints multipleof two number
 * @argc: int
 * @argv: char pointer
 * Return: zero if no error and 1 if error found
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
