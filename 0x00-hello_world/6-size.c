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

printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of int: %zu byte(s)\n", sizeof(b));
printf("size of long int: %zu byte(s)\n", sizeof(c));
printf("size of long long int: %zu byte(s)\n", sizeof(d));
printf("size of float: %zu byte(s)\n", sizeof(f));

return (0);
}
