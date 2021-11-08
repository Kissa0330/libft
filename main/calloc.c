#include <stdio.h>
#include <stdlib.h>
#include <xlocale.h>
void	*ft_calloc(size_t count, size_t size);
int main(int argc, char *argv[])
{
	size_t a = (size_t)atoi(argv[1]);
	size_t b = (size_t)atoi(argv[2]);
	int *test = ft_calloc(a, b);
	if(test == NULL)
		printf("ft_calloc is null\n");
	else
		test[a * b - 1] = 5;
	int *test2 = calloc(a, b);
	if(test2 == NULL)
		printf("calloc is null\n");
	else
		test2[a * b - 1] = 5;
	printf("ft_calloc = %d, %d\n", test[a * b - 1], test[1]);
	printf("calloc = %d, %d\n", test2[a * b - 1], test2[1]);
	return argc;
}