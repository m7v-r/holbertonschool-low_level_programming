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

/* البروتوتايب الخاص بالمهمة رقم 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* البروتوتايب الخاص بالمهمة رقم 2 - أضف هذا السطر الآن */
void print_dog(struct dog *d);

#endif /* DOG_H */
