
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

dog_t *new_dog(char *name, float age, char *owner)
{
    int name_lenght = _strlen(name) + 1;
    int owner_lenght = _strlen(owner) + 1;
    int a;
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /*copy name*/
    new_dog->name = malloc(name_lenght);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    for (a = 0; a < name_lenght; a++)
    {
        new_dog->name[a] = name[a];
    }
    new_dog->name[name_lenght - 1] = '\0';


    /*copy owner*/
    new_dog->owner = malloc(owner_lenght);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }
    for (a = 0; a < owner_lenght; a++)
    {
        new_dog->owner[a] = owner[a];
    }
    new_dog->owner[owner_lenght -1] = '\0';

    new_dog->age = age;

    return new_dog;
}
