#ifndef DOG_H
#define DOG_H

/**
 *struct dog - structure containing description of a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/*define new type dog_t, newname for type struct dog*/
typedef struct dog dog_t;

/* prototypes for following tasks */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
