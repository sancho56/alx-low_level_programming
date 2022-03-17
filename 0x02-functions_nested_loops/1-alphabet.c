#include "main.h"
#include <stdio.h>
/** *
 * print_alphabet - print the alphabet, in lowercase, followed by a new line
 * @void: nothing to pass
 *
 * Description: This function print alphabet in lowercase
 * section header: funcition prints
 * Context: no sleeping
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

