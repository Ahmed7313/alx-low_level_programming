#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate.
 *
 * Return: Pointer to duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	int len;
	char *s;

	if (!str)
		return (NULL);

	len = strlen(str) + 1;
	s = malloc(len);

	if (!s)
		return (NULL);

	strncpy(s, str, len);

	return (s);
}

/**
 * new_dog - Creates a new dog with name, age, and owner.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner name.
 *
 * Return: A pointer to the new dog_t, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	newDog->name = _strdup(name);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = _strdup(owner);
	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
