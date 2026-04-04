#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic info about a dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* أضف هذا السطر في ملف dog.h */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
