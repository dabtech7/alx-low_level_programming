#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: memory in bytes
 *
 * Return: pointer to our new memory
 *         exit on 98 if fails
*/

void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
