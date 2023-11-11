#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a funct prints numbers, followed by a new line.
 *
 * @separator: pointer to constant
 * @n: begins input variables
 *
 * Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
