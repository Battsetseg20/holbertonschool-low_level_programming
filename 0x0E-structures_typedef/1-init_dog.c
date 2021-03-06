#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initializes a dog structure
 *@d: pointer to a struct dog
 *@name : name
 *@age : age
 *@owner : owner's name
 *
 *Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;  /* or d->name */
		(*d).age = age;  /* d->age */
		(*d).owner = owner;  /*d->owner */
	}
}
