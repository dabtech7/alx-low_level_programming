#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - funct to search for an int
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call of checkng index in array
 *       if there is a matche
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
		}
	}

	return (-1);

}