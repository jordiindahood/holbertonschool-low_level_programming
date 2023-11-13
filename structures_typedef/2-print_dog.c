#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize a variable type "struct dog"
 * @d: struct dog *
 * @name: char *
 * @age: float
 * @owner: char*
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
