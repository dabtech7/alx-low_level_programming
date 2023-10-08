#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point.
 *
 * Return: - retrun 1 (Succes)
 */

int main(void)
{
	char str[100] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < (int)strlen(str); i++)
	{
		putchar(str[i]);
	} putchar('\n');

	return (1);
}
