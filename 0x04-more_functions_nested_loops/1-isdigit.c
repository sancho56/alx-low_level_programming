#include "main.h"
/**
 * _isdigit - checks for a digit
 */
int _isdigit(int c)
{
	int digit;
	digit = isdigit(c);

	if (digit == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

