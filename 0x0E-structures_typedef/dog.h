#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef
 */
typedef struct dog dog_t;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
