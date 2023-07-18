#include <stdlib.h>
#include "dog.h"

/**
 *init_dog -  initialize the variable type of struct dog
 *@name: initialize
 *@owner: initialize
 *@age: initialize
 *@d: the pointer to initialize struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

