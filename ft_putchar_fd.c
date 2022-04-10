#include <unistd.h>
void ft_putchar_fd(char c, int fd)
{
    char *C;

    *C = c;
    write(fd, C, sizeof(char));
}