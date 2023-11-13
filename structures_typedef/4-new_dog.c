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
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
	return (d);
}
/**
 * _strcpy - check the code
 * Description: copy an array to another
 * @dest : pointer to destination array
 * @src : pointer to be copied
 * Return: char*
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
