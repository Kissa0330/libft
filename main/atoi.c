#include <stdlib.h>
#include <stdio.h>
int ft_atoi(const char *str);
int main(int argc, char *argv[])
{
	printf("ft_atoi value is %d\n", ft_atoi(argv[1]));
	printf("atoi value is %d\n", atoi(argv[1]));
	return argc;
}