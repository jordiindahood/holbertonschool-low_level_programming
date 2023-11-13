#include "main.h"
/**
 * init_dog - initialize a variable type "struct dog"
 * @d: struct dog *
 * @name: char *
 * @age: float
 * @owner: char*
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog;

	dog.name = *name;
	dog.age = age;
	dog.owner = *owner;

	d = &dog;
}
