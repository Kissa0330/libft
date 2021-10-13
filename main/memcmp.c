#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int *ft_memcmp(const void *s1, const void *s2, size_t n);

int main(int argc, char *argv[])
{
	int array1[5] = {0, 1, 2, 3, 4};
	int array2[5] = {0, 1, 2, 3, 4};

	printf("%d\n", memcmp(array1, array2, sizeof(array1)));

	printf("%d\n", ft_memcmp(array1, array2, sizeof(array1)));

	printf("memcmp = %d\n", memcmp(argv[1], argv[2], 3));
	printf("ft_memcmp = %d\n", ft_memcmp(argv[1], argv[2], 3));
	return 0;
}