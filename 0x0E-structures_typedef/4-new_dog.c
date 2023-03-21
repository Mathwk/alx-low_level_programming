#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog data input
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i;
	char *na, *ow;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0';)
		i++;
	n_dog->name = malloc(sizeof(char) * (i + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return(NULL);
	}
	for (; i >= 0; i--)
		na[i - 1] = name[i - 1];
	na[i] = '\0';
	for (i = 0; owner[i] != '\0';)
		i++;
	n_dog->owner = malloc(sizeof(char) * (i + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (; i >= 0; i--)
		ow[i - 1] = owner[i - 1];
	ow[i] = '\0';
	n_dog->name = na;
	n_dog->age = age;
	n_dog->owner = ow;
	return (n_dog);
}
