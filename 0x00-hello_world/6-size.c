#include <stdio.h>
/**
 * main -print out sizes of data types in C
 *
 * Return :0
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu bytes(s)\n", sizeof(b));
printf("size of a long int: %lu bytes(s)\n", sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", sizeof(d));
printf("size of a float: %lu bytes(s)\n", sizeof(f));
return (0);
}
