#include "ctype.h"
#include "stdio.h"
int ft_isalpha(int i);
int main(int argc, char *argv[])
{
	int i;
	i = argv[1][0];
	printf("isalpha value is %d\n", isalpha(i));
	printf("ft_isalpha value is %d\n", ft_isalpha(i));
	return argc;
}