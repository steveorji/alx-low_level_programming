#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c;

	c = 'n';
	while
		(c <= 'z') {
			if (c != 'q' && c != 'e')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
