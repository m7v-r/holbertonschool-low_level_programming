#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic info about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Description: A structure that stores dog information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
