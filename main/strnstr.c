#include <stdio.h>
#include <string.h>
char *ft_strnstr(char *str, char *c, size_t t);
int main(int argc, char *argv[])
{
	printf("ft_strnstr = %s\n", ft_strnstr(argv[1], argv[2], 0));
	printf("strnstr = %s\n", strnstr(argv[1], argv[2], 0));
	return argc;
}