#include "variadic_functions.h"

/**
 * print_char - prin char
 *
 * @arg: argument pointing of list
 *      to the character to be printed
 *
 * Return: 0
*/

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print an integer
 *
 * @arg: argument pointing of list
 *      to the character to be printed
 *
 * Return: 0
*/

void print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - prints float
 *
 * @arg: argument pointing of list
 *      to the character to be printed
 *
 * Return: 0
*/

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - prints string
 *
 * @arg: argument pointing of list
 *      to the character to be printed
 *
 * Return: 0
*/

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function prints anything
 *
 * @format: A string of character representing
 *          the argument types
 *
 * Description: If any argument not of char,
 *              int or float * is ignored
 *
 * Return: 0
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		/**
		 * 4 equals to the number of functions present
		 * then if j is less than 4 and our current
		 * format is not equal to format in functions
		 * then j becomes j + 1
		 */
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
