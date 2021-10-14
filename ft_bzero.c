#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
	size_t i = 0;
	unsigned char *str = (unsigned char *)s;
	while (i < n)
	{
		*str++ = '\0';
		i++;
	}
}