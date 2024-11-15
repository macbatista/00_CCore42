#include <unistd.h>
#include <limits.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nbr = n;
	if (nbr >= 10)
	{
		ft_putnbr_fd((nbr / 10), 1);
	}
	ft_putchar_fd((nbr % 10) + '0', fd);
}

int main(void)
{
	ft_putnbr_fd(-1234, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(INT_MAX, 1);
}