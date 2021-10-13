#include <stddef.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i = 0;
	unsigned char *str = (unsigned char *)src;
	unsigned char *res = (unsigned char *)dst;
	while (i < n)
	{
		*res++ = *str++;
		i++;
	}
	return dst;
}
