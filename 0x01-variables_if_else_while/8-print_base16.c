#include <stdio.h>
/**
 * main - Prog entry point
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '0';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
