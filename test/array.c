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

/**
 * free_array - frees an array
 * @_arr: the array to be freed
 *
 */

void free_array(char **_arr)
{
	int i;

	for (i = 0; _arr[i]; i++)
	{
		free(_arr[i]);
	}

	free(_arr);
}
