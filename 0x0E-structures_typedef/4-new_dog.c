#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: returns new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	unsigned long int i, j;

	d = malloc(sizeof(dog_t));
	if (d == 0 || owner == 0 || name == 0)
	{
		free(d);
		return (0);
	}
	(*d).name = malloc(strlen(name) + 1);
	(*d).owner = malloc(strlen(owner) + 1);

	if ((*d).name == 0 || (*d).owner == 0)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
		return (0);
	}
	for (i = 0; i <= strlen(name) + 1; i++)
		(*d).name[i] = *(name + i);
	for (j = 0; j <= strlen(owner) + 1; j++)
		(*d).owner[j] = *(owner + j);
	(*d).age = age;
	return (d);
}
