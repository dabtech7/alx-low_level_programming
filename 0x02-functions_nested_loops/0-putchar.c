#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using prototype _putchar
 *
 * Return: Always return 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	_putchar(str[i]);
	_putchar('\n');

	return (0);
}
