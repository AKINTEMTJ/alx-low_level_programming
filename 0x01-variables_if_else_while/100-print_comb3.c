#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits.
 * two digits must be different
 *
 * Return: Always 0
 */

int main(void)
{
	int units = '0';
	int tens = '0';

	for (tens == '0'; tens <= '9'; tens++)
	{

	for (units == '0'; units <= '9'; units++)/* print unit*/
	{
			if (tens <= units)/*no repitition*/
			{
				putchar(tens);
				putchar(units);
			}
	if (!(units == '9' && tens == '8'))/* space and comma*/
	{
		putchar(',');
		putchar(' ');
	}

	}
	}
	putchar('\n');
	return (0);
}
