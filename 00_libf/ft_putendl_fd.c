#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i],fd);
        i++;
    }
    ft_putchar_fd('\n',fd);
}

int main(void)
{
    char str[8] = "mcrispim";
    ft_putstr_fd(str,1);
}
