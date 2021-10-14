#include <ctype.h>
#include <stdio.h>
int ft_toupper(int c);
int main(int argc, char const *argv[])
{
	printf("toupper = %c\n", toupper(argv[1][0]));
	printf("toupper = %c\n", ft_toupper(argv[1][0]));
	return (argc);
}
