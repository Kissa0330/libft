#include <unistd.h>
#include <limits.h>
size_t ft_strlen(char *str);

void ft_putstr_fd(char *s, int fd)
{
	size_t length;

	length = ft_strlen(s);
	while (length > INT_MAX)
	{
		write(fd, s, INT_MAX);
		s = s + INT_MAX;
		length = length - INT_MAX; 
	}
	write(fd, s, length);
}