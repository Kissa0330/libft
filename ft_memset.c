#include <stddef.h>
void *ft_memset(void *buf, int ch, size_t n)
{
	size_t i = 0;
	unsigned char c = ch;
	unsigned char *str = (unsigned char *)buf;
	while (i < n)
	{
		*str++ = c;
		i ++;
	}
	return buf;
}