#include <stdio.h>
#include <unistd.h>
size_t	ft_strlen(char *str);
void ft_putstr_fd(char *s, int fd);

int main(int argc, char *argv[])
{
    printf("S = %s\n", argv[1]);
    write(1, argv[1], ft_strlen(argv[1]));
    printf("\n");
    ft_putstr_fd(argv[1], 1);
    printf("\n");
    return argc;
}