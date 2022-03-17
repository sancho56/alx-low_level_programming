#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper(c) - checks uppercase
 * @c: pass the checked char
 *
 * Description: checks if the letter is uppercase or not
 * Return: 0 if lowercase and 1 if uppercase
 */
int _isupper(int c)
{
	int upper;
	upper = isupper(c);

	if(upper == 0)
		return 0;
	else
		return 1;
}

