#include <stdio.h>
#include <stdlib.h>
char *ft_itoa(int n);
int main(int argc, char *argv[])
{
	printf("ft_itoa = %s\n", ft_itoa(atoi(argv[1])));
	return argc;
}