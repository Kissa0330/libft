#include <stddef.h>
char *ft_strrchr(const char *s, int c)
{
	char *t;
	char *ret;
	int flag;

	t = (char *)s;
	ret = t;
	while (*t != '\0')
	{
		if (*t == c)
		{
			ret = t;
			flag = 1;
		}
		t++;
	}
	if (c == '\0')
		return (t);
	if (*t == '\0' && flag != 1)
		return (NULL);
	return (ret);
}