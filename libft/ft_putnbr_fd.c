#include <unistd.h>
char	*ft_itoa(int n);
size_t	ft_strlen(char *str);

void ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	write(fd, str, ft_strlen(str));
}