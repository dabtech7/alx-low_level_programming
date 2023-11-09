#include <stddef.h>

/**
 * array_iterator - a function to executes a function
 *                  as a parameter on each element of an array
 *
 * @array: array of iterate
 * @size: array size
 * @action: pointer function to call
 *
 * Return: empty if @array and @action is 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
