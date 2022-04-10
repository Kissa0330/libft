#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *res = (unsigned char *)s;
	unsigned char sc = (unsigned char)c;
	while (i < n)
	{
		if (*res == sc)
			return (res);
		res++;
		i++;
	}
	return (NULL);
}