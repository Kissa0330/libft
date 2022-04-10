#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		i++;
	}
	return (0);
}