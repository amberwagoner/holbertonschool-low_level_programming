#include "dog.h"

/**
* print_dog - prints dog
* @d: pointer to d
*/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("(nil)");
	if (d->owner == NULL)
		printf("(nil)");
	else
		return;
}
