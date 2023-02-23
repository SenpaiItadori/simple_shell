#include "shell.h"

char *copy(char *empty, char *str)
{
	int a;

	if (str == NULL)
	{
		return(NULL);
	}
	a = strncmp(str, "/", 1);

	if (a != 0)
	{
		strcpy(empty, "/bin/");
		strcat(empty, str);
		strcat(empty, "");
	}
	else
	{
		strcpy(empty, str);
		return(empty);
	}
	return(empty);
}
