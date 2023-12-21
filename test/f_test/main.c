#include "main.h"

int main(void)
{
	char *str, **a;
	int i = 0, j = 0;

	prompt();
	str = readline();

	a = arg_sort(str);

	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	free(str);
	while (a[j])
	{
		free(a[j]);
		j++;
	}
	free(a);

	return (0);
}
