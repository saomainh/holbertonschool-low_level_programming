
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_cpy;
    char *owner_cpy;

    name_cpy = malloc(strlen(name));
    _strcpy(name_cpy, name);

    owner_cpy = malloc(strlen(owner));
    _strcpy(owner_cpy, owner);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);
    new_dog->name = name_cpy;
    new_dog->age = age;
    new_dog->owner = owner_cpy;
    return new_dog;
    free (new_dog);
}