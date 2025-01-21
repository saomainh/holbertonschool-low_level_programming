
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != s[-1])
	{
		count++;
		i++;
	}

	return (count);
}

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
    char *new_name;
    char *new_owner;

    new_name = malloc(_strlen(name) * sizeof(char));
    new_owner = malloc(_strlen(owner) * sizeof(char));
    if (new_name == NULL || new_owner == NULL)
        return (NULL);

    _strcpy(new_name, name);
    _strcpy(new_owner, owner);

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);
    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;
    return new_dog;
    free (new_dog);
    free (new_name);
    free(new_owner);
}
