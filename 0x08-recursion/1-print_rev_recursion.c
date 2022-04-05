#include "main.h"
/**
 * _print_rev_recursion - prints a string reverse
 * @s: char pointer
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
