#include "main.h"

/**
 * create_array - creates an array
 * @size: the size of the array
 *
 * Return: a pointer to a bunch of strings or NULL if failed
 */

char **create_array(int size)
{
	char **arr;

	arr = malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (NULL);

	return (arr);
}
