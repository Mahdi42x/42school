
#include "libft.h"

void	ft_putnbr(int n, int fd)
{
	char c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
			ft_putnbr(n, fd);
		}
		else if (n < 10)
		{
			c = n + '0';
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr(n / 10, fd);
			c = (n % 10) + '0';
			write(fd, &c, 1);
		}
	}
}
