#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	num1;
char	num2;
char	num3;

void    ft_writing(void)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
	num3++;
	if(num1 < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	num1 = '0';
	while(num1 <= '7')
	{
		num2 = num1 + 1;
		while(num2 <= '8')
		{
			num3 = num2 + 1;
			while(num3 <= '9')
				ft_writing();
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}
