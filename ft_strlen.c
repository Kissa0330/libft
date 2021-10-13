#include <stddef.h>
size_t	ft_strlen(char *str)
{
	size_t	n;

	n = 0;
	while (*str++ != '\0')
	{
		n++;
	}
	return (n);
}
