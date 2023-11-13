#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	strcpy(doggy->name, name);
	doggy->age = age;
	strcpy(doggy->owner, owner);

	return (doggy);
}
