#include <stdio.h>
char	*ft_strjoin(char const *s1, char const *s2);

int main(int argc, char const *argv[])
{
	printf("ft_strjoin = %s\n",ft_strjoin(argv[1], argv[2]));
	return argc;
}