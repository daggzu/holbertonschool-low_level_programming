#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - free function
 * @d: parameter
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*  the name field */
		free(d->name);

		/*  the owner field */
		free(d->owner);

		/*  the dog_t structure */
		free(d);
	}
}
