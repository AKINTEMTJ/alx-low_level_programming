#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: Alway 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

