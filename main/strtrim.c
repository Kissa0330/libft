#include <stdio.h>
char *ft_strtrim(char const *s1, char const *set);
int main(int argc, char *argv[])
{
	printf("ft_strtrim = %s\n", ft_strtrim(argv[1], argv[2]));
	return argc;
}