#include "main.h"

/**
 * main - prints a name of file
 * @argc: integer that counts the command arguments
 * @argv: char pointer that store command arguments
 * Return: integer zero
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
