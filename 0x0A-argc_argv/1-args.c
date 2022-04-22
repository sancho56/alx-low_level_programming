#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: integer
 * @argv: char pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%d\n", (argc - 1));
	return (0);
}
