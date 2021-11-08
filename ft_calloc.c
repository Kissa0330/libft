#include <stdlib.h>
void ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void *res;

	res = malloc(count * size);
	if(res == NULL)
		return (NULL);
	else
		ft_bzero(res, count * size);
	return (res);
}