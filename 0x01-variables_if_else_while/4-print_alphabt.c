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

	for (i = 97; i < 123; i++)
	{
	c = i;
		if (c == 113 || c == 101)
		{
		continue;
		}
	putchar(c);
	}
	putchar('\n');

	return (0);

}
