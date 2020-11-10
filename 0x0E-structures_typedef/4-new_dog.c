#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog -  creates anew dog, memory allocated
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namemem, *ownermem;
	int size_name, size_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	size_name = _strlen(name) + 1;
	size_owner = _strlen(owner) + 1;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namemem = malloc(size_name * sizeof(char));
	if (namemem == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(namemem, name);

	ownermem = malloc(size_owner * sizeof(char));
	if (ownermem == NULL)
	{
		free(namemem);
		free(new_dog);
		return (NULL);
	}
	_strcpy(ownermem, owner);

	new_dog->name = namemem;
	new_dog->age = age;
	new_dog->owner = ownermem;
	return (new_dog);
}

/**
 *_strlen - prints the length of a string
 *@s: string variable
 *Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

/**
 *_strcpy - copies string
 *
 *@src: source string
 *@dest: destination string
 *
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((*(dest + i) = *src++))
	{
		i++;
	}
	return (dest);

}
