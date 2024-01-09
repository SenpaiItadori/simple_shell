#include "main.h"

/**
 * arg_sort - sorts the entire user  command input into an array for exercution
 * @buffer: the data from the user input into the stdin
 *
 * Return: an array containing all command arguments or NULL if failed
 */

char **arg_sort(char *buffer)
{
	int size = 0, i = 0;
	char **arr, *token, *copy, *buff_cpy;
	const char *delim = " \n\t";

	buff_cpy = _strdup(buffer);
	size = tok_num(buff_cpy, delim);
	free(buff_cpy);
	copy = strdup(buffer);
	arr = create_array(size);

	token = strtok(copy, delim);
	if (!token)
	{
		free(arr);
		free(copy);
		return (NULL);
	}
	arr[i] = malloc(sizeof(char) * (_strlen(token) + 1));
	if (arr[i] == NULL)
	{
		free(copy);
		return (NULL);
	}
	_strcpy(arr[i], token);
	i++;

	while (token)
	{
		token = strtok(NULL, delim);
		if (token != NULL)
		{
			arr[i] = malloc(sizeof(char) * (_strlen(token) + 1));
			if (arr[i] == NULL)
			{
				free(copy);
				return (NULL);
			}
			_strcpy(arr[i], token);
			i++;
		}
	}
	free(copy);
	arr[size] = NULL;

	return (arr);
}
