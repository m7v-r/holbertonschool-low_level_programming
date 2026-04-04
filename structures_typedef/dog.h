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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
