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

	for (i = 97; i < 123; i++)
	{
	c = i;
	putchar(c);
	}
	for (j = 65; j < 91; j++)
	{
	d = j;
	putchar(d);
	}
	putchar('\n');

	return (0);

}
