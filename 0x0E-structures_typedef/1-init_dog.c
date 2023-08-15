#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a lonely dog
 * @d: init
 * @name: lonely dog name
 * @age: lonely dog age
 * @owner: lonely dog owners name
 * Return: VOID
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
