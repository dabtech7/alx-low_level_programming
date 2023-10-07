#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char c, d;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		c = i + '0';
		putchar(c);
	}
	for (j = 97; j < 103; j++)
	{
		d = j;
		putchar(d);
	}
	putchar('\n');
	return (0);
}
