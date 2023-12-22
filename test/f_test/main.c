#include "main.h"

int main(void)
{
	char *str, **a, *cmd;
	int j = 0;

	prompt();
	str = readline();

	a = arg_sort(str);
	cmd = path_finder(a[0]);

	printf("it worked , the path is %s\n", cmd);
	free(str);
	while (a[j])
	{
		free(a[j]);
		j++;
	}
	free(a);
	free(cmd);

	return (0);
}
