
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_cpy = name;
    char *owner_cpy = owner;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);
    new_dog->name = name_cpy;
    new_dog->age = age;
    new_dog->owner = owner_cpy;
    return new_dog;
    free (new_dog);
}