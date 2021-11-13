#include <stdlib.h>
size_t	ft_strlen(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	length;
	unsigned int	i;
	char			*res;

	if(s == NULL || f == NULL)
		return (NULL);
	length = ft_strlen((char *)s);
	res = malloc((length + 1) * sizeof(char));
	if(res == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(res + i) = f(i, *((char *)s + i));
		i++;
	}
	res[length] = '\0';
	return (res);
}