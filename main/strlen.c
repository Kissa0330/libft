#include <stdio.h>
#include <string.h>
size_t ft_strlen(char *str);
int main(int argc, char *argv[])
{
	printf("ft_strlen = %zu\n",ft_strlen(argv[1]));
	printf("strlen = %zd\n",strlen(argv[1]));
	return argc;
}
