#include <stddef.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i = 0;
	unsigned char *str = (unsigned char *)src;
	unsigned char *res = (unsigned char *)dst;
	while (i < len)
	{
		unsigned char tmp;
		tmp = *str++;
		*res++ = tmp;
		i++;
	}
	return dst;
}