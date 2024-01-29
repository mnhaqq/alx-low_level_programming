#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function to create new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *Return: pointer to newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).name = malloc(sizeof(char) * _strlen(name));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		free((*new_dog).name);
		return (NULL);
	}
	(*new_dog).owner = malloc(sizeof(char) * _strlen(owner));
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		free((*new_dog).owner);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}


/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	i++;

	return (i);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
