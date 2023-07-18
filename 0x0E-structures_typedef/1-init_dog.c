#include "dog.h"
#include <stdlib.h>

/**
 *init_dog -  initialize the variable type of struct dog
 *@name: initialize
 *@owner: initialize
 *@age: initialize
 *@d: the pointer to initialize struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d -> name = name;
d -> age = age;
d -> owner = owner;
}
