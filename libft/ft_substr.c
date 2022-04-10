#include <stdlib.h>
size_t	ft_strlen(char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*res;
	size_t	i;

	str = (char *)s;
	if ((size_t)start >= ft_strlen(str) || len == 0)
		return ("");
	res = malloc(len * sizeof(char));
	str = str + start;
	i = 0;
	while (i < len && str[i])
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}
