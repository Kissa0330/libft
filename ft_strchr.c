#include <stddef.h>
char *ft_strchr(const char *s, int c)
{
	char *t;

	t = (char *)s;
	while(*t != c)
	{
		if (*t == '\0')
			return (NULL);
		t++;
	}
	return (t);
}
