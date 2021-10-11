#include "ctype.h"
#include "stdio.h"
int ft_isdigit(int i);
int main(int argc, char *argv[])
{
	int i;
	i = argv[1][0];
	printf("isdigit value is %d\n", isdigit(i));
	printf("ft_isdigit value is %d\n", ft_isdigit(i));
	return argc;
}