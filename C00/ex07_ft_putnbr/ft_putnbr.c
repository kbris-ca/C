#include <stdio.h>
#include <unistd.h>

void	ft_num_calc(int nb)
{
	char	num;

	if(nb > 9)
	{
		num = nb % 10 + '0';
		nb /= 10;
		ft_num_calc(nb);
		write(1, &num, 1);
	}
	else
	{
		if(!(nb == -2147483648))
		{
			num = nb + '0';
			write(1, &num, 1);
		}
	}
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1, "-", 1);
		if(nb == -2147483648)
			write(1, "2147483648", 10);
		nb *= -1;
	}
	ft_num_calc(nb);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_putnbr(-70003);
	ft_putnbr(42);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	return 0;
}
