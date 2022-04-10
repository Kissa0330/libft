#include <stdio.h>
#include <unistd.h>
void ft_putchar_fd(char c, int fd);
int main(int argc, char *argv[])
{
    printf("C = %s\n", argv[1]);
    write(1, argv[1], 1);
    printf("\n");
    ft_putchar_fd(*argv[1], 1);
    printf("\n");
    return argc;
}