#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - checks for the number type
 * description: the program notifies if a number is  postive or negative
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("is postive");
	}
	else if (n==0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}

