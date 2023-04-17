#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - data structure
 *@name: name of dog
 *@owner: owner of dog
 *@age: age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


/**
*dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
