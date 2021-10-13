#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *ft_memmove(void *restrict dst, const void *restrict src, size_t n);

int main(int argc, char *argv[])
{
	int array1[5] = {0, 1, 2, 3, 4};
	int array2[5];

	memmove(array2, array1, sizeof(array1));
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");

	int array3[5];
	ft_memmove(array3, array1, sizeof(array1));

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array3[i]);
	}
	printf("\n");

	char *str;
	char *str2;
	str = malloc(sizeof(char) * 4);
	str2 = malloc(sizeof(char) * 4);
	printf("memmove = %s\n", memmove(str, argv[1], 4));
	printf("ft_memmove = %s\n", ft_memmove(str2, argv[1], 4));
	printf("memmove = %s\n", memmove(str, "te", 2));
	printf("ft_memmove = %s\n", ft_memmove(str2, "te", 2));
	return 0;
}
