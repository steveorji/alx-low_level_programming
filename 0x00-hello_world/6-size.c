#include <stdio.h>
/**
 * main -  program that prints the size of various types on the computer
 * Return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: 1 byte(s)\n", sizeof(a));
printf("size of int: 4 byte(s)\n", sizeof(b));
printf("size of long int: 4 byte(s)\n", sizeof(c));
printf("size of long long int: 8 byte(s)\n", sizeof(d));
printf("size of float: 4 byte(s)\n", sizeof(f));

return (0);
}
