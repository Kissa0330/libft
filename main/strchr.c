#include <stdio.h>
#include <string.h>
char *ft_strchr(char *str, char c);
int main(int argc, char *argv[])
{
	printf("ft_strchr = %s\n",ft_strchr(argv[1], argv[2][0]));
	printf("strchr = %s\n",strchr(argv[1], argv[2][0]));
	return argc;
}