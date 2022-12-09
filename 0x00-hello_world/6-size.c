#include <stdio.h>
/**
 * main -print out sizes of data types in C
 *
 * Return : 0
 */

int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));

return (0);
}
