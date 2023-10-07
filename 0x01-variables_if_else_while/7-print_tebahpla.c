#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;

	for (i = 122; i > 96; i--)
	{
		c = i;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
