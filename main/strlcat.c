#include <stdio.h>
#include  "libft.h"

int	main(int argc, char *argv[])
{
	int i;
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	i = 0;
	ft_strlcat(dest, src, 3);
	printf("%s\n", dest);
	return (argc);
}