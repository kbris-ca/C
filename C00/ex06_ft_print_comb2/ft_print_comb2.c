#include <stdio.h>
#include <unistd.h>

void	ft_additions(char *num1, char *num2)
{
	if(*num2 == '9')
	{
		*num2 = '0';
		*num1 = *num1 + 1;
	}
	else
		*num2 = *num2 + 1;
}

void	ft_writing(char num1, char num2, char num3, char num4)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
	write(1, &num3, 1);
	write(1, &num4, 1);
	if(!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '0';
	while(!(num1 == '9' && num2 == '9'))
	{
		num3 = num1;
		num4 = num2;
		while(!(num3 == '9' && num4 == '9'))
		{
			ft_additions(&num3, &num4);
			ft_writing(num1, num2, num3, num4);
		}
		ft_additions(&num1, &num2);
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;
}
