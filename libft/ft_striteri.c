#include <stdlib.h>
size_t	ft_strlen(char *str);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	length;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		f(i, (s + i));
		i++;
	}
	return ;
}
