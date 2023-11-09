/**
 * print_name - print name
 *
 * @name: name print
 * @f: function pointer will return 0
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
