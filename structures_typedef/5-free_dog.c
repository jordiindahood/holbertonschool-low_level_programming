#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - whoooo let the dogs out? whoof, Whoof Whoof
 * @d: struct dog *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
