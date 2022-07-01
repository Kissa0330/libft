#include <stdio.h>
#include <string.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_atoi(const char *str);

int	main(int argc, char *argv[])
{
	char str[5] = "WORLD";
	char *s = NULL;
	// printf("%zu\n", ft_strlcat(NULL,"WORLD",2));
	printf("%zu\n", strlcat(NULL,"WORLD",2));
	return (argc);
}