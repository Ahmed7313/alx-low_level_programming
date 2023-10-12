#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Describes the dog's basic information
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
