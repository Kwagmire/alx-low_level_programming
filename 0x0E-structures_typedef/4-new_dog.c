#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - find the length of a string
 * @s: the string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int len = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - copy the content of a string to another
 * @dest: the destination
 * @src: the source
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int src_len;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[src_len] = src[src_len];
	}

	dest[src_len] = '\0';

	return (dest);
}
/**
 * new_dog - create a new variable of the structure dog_t
 * @name: the name of the dog
 * @age: it's age
 * @owner: its owner
 *
 * Return: the created variable or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));

	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char *) * (_strlen(name) + 1));

	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}

	dogg->owner = malloc(sizeof(char *) * (_strlen(owner) + 1));

	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	dogg->name = _strcpy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcpy(dogg->owner, owner);

	return (dogg);
}
