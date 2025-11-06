#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * struct dog - structure for dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: defines a new type struct dog with name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */

