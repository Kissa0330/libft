#include <stdio.h>
char **ft_split(char *str, char c);

int main(int argc, char *argv[])
{
	int i;
	char **strs;

	i = 0;
	strs = ft_split(argv[1], argv[2][0]);
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i ++;
	}
	
	return (argc);
}
