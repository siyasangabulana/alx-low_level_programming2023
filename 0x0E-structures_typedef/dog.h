#ifndef DOG_H
#define DOG_H

/**
 *struct dog - basic info of the dog
 *@name: name of a dog
 *@age: age of a dog
 *@owner: owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
#endif
