#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: the string whose length is to be found
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: a copy of the string or NULL if failed
 */

char *_strdup(char *str)
{
	int i = 0, len;
	char *copy;

	len = _strlen(str);
	copy = malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);

	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';

	return (copy);
}

/**
 * _strcpy - copies a string to another
 * @s1: the address to the space in memory to store the copy
 * @s2: the string to be copied
 *
 * Return: the address of the copy of the string or NULL if failed
 */

char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';

	return (s1);
}

/**
 * _concat - appends one string to another
 * @s1: the string to be appended to
 * @s2: the string with the data to be added onto s1
 *
 * Return: the address of the ne string containing data from s1 and s2
 * or NULL if failed
 */

char *_concat(char *s1, char *s2)
{
	char *s3 = s1;

	while (*s3)
		s3++;

	while (*s2)
	{
		*s3 = *s2;
		s3++;
		s2++;
	}
	*s3 = *s2;

	return (s1);
}

/**
 * _strcmp - compares 2 strings to see if they are identical
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if the are exactly identical 1 if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
			return (1);
	}

	return (0);
}
