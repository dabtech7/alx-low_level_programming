#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		n = i + '0';
		putchar(n);
	}
	putchar('\n');
	return (0);

}
