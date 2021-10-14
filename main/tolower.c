#include <ctype.h>
#include <stdio.h>
int ft_tolower(int c);
int main(int argc, char const *argv[])
{
	printf("tolower = %c\n", tolower(argv[1][0]));
	printf("tolower = %c\n", ft_tolower(argv[1][0]));
	return (argc);
}