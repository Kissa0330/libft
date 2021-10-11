#include "ctype.h"
#include "stdio.h"
int ft_isprint(int i);
int main(void)
{
	// int i;
	// i = argv[1][0];
	printf("isprint value is %d\n", isprint(31));
	printf("ft_isprint value is %d\n", ft_isprint(31));
	printf("isprint value is %d\n", isprint(127));
	printf("ft_isprint value is %d\n", ft_isprint(127));
	// return argc;
}