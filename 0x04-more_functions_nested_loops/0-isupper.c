#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 */
int _isupper(int c)
{
	int upper;
	upper = isupper(c);

	if (upper == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

