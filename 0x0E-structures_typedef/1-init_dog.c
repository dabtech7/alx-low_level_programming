#include "dog.h"

/**
 * init_dog - initialization of dog struct
 *
 * @d: input pointer to struct
 * @name: input for name of dog
 * @age: input for age of dog
 * @owner: input for owner of dog
 *
 * Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*d->name = name;*/
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
