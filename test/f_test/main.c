#include "main.h"

int main(void)
{
	int len = 1;
	char *hello = "Ya Bish", *noo, *cpy, *cpy1;

	cpy = _strdup(hello);
	len += _strlen(cpy);

	cpy1 = malloc(sizeof(char) * len);
	if (cpy1 == NULL)
	{
		printf("malloc failure\n");
		return (0);
	}
	_strcpy(cpy1, cpy);
	noo = _concat(cpy, cpy1);

	printf("%s\n", noo);

	free(cpy);
	free(noo);
	free(cpy1);

	return (0);
}
