#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(int argc, char *argv[])
{
	int array1[5] = {0, 1, 2, 3, 4};
	int array2[5];

	memcpy(array2, array1, sizeof(array1));
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");

	int array3[5];
	ft_memcpy(array3, array1, sizeof(array1));

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array3[i]);
	}
	printf("\n");

	char *str;
	char *str2;
	str = malloc(sizeof(char) * 4);
	str2 = malloc(sizeof(char) * 4);
	printf("memcpy = %s\n", memcpy(str, argv[1], 4));
	printf("ft_memcpy = %s\n", ft_memcpy(str2, argv[1], 4));
	return 0;
}
