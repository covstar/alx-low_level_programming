#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string in questions
 * Return: string length as an int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strdup - returns a pointer to a space in memory containing copy of a string
 * @str: the string to be copied
 *
 * Return: pointer to the memory allocation
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size;
	unsigned int idx;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	idx = 0;
	while (idx < size)
	{
		s[idx] = str[idx];
		idx++;
	}

	return (s);
}

/**
 * new_dog - creates a new variable from struct dog
 * @name: value to be stored at .name
 * @age: value to be stored at .age
 * @owner: value to be stored at .owner
 * Return: pointer to new variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *sName, *sOwner;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	sName = _strdup(name);

	if (sName == NULL)
	{
		free(new);
		return (NULL);
	}

	sOwner = _strdup(owner);

	if (sOwner == NULL)
	{
		free(sName);
		free(new);
		return (NULL);
	}

	new->name = sName;
	new->age = age;
	new->owner = sOwner;

	return (new);
}
